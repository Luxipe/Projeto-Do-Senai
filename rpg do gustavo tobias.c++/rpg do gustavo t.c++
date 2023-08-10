#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

// Estrutura para representar os equipamentos do personagem
struct Equipment {
    string name;
    string type;
    string attribute;
    int value;
};

// Estrutura para representar a ficha do personagem
struct Character {
    string name;
    string characterClass;
    int level;
    string race;
    int healthPoints;
    int attackPoints;
    vector<string> abilities;
    vector<Equipment> equipments;
};

// Protótipo da função para exibir a ficha completa do personagem
void displayCharacterSheet(const Character& character);

// Demais protótipos das funções
void addEquipment(Character& character);
void removeEquipment(Character& character);
void displayEquipmentList(const Character& character);
void searchEquipment(const Character& character);
void saveCharacterSheet(const Character& character);
void loadCharacterSheet(Character& character);

// Implementação da função para adicionar um equipamento à lista de equipamentos do personagem
void addEquipment(Character& character) {
    Equipment newEquipment;
    
    cout << "Nome do equipamento: ";
    getline(cin, newEquipment.name);
    
    cout << "Tipo do equipamento: ";
    getline(cin, newEquipment.type);
    
    cout << "Atributo do equipamento: ";
    getline(cin, newEquipment.attribute);
    
    cout << "Valor do equipamento: ";
    cin >> newEquipment.value;
    
    character.equipments.push_back(newEquipment);
}

// Implementação da função para remover um equipamento da lista de equipamentos do personagem
void removeEquipment(Character& character) {
    string nameToRemove;
    cout << "Digite o nome do equipamento a ser removido: ";
    cin.ignore();
    getline(cin, nameToRemove);

    // Percorre a lista de equipamentos e remove o equipamento com o nome correspondente
    auto it = std::remove_if(character.equipments.begin(), character.equipments.end(),
                             [&nameToRemove](const Equipment& e) {
                                 return e.name == nameToRemove;
                             });

    // Redimensiona o vetor para excluir o equipamento removido
    character.equipments.erase(it, character.equipments.end());
}

// Implementação da função para exibir todos os equipamentos do personagem
void displayEquipmentList(const Character& character) {
    cout << "Lista de equipamentos do personagem:" << endl;
    for (const auto& equipment : character.equipments) {
        cout << "Nome: " << equipment.name << endl;
        cout << "Tipo: " << equipment.type << endl;
        cout << "Atributo: " << equipment.attribute << endl;
        cout << "Valor: " << equipment.value << endl;
        cout << endl;
    }
}

// Implementação da função para buscar um equipamento na lista por nome
void searchEquipment(const Character& character) {
    string nameToSearch;
    cout << "Digite o nome do equipamento a ser buscado: ";
    cin.ignore();
    getline(cin, nameToSearch);

    bool found = false;
    for (const auto& equipment : character.equipments) {
        if (equipment.name == nameToSearch) {
            cout << "Equipamento encontrado:" << endl;
            cout << "Nome: " << equipment.name << endl;
            cout << "Tipo: " << equipment.type << endl;
            cout << "Atributo: " << equipment.attribute << endl;
            cout << "Valor: " << equipment.value << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Equipamento não encontrado." << endl;
    }
}

// Implementação da função para salvar a ficha de personagem em um arquivo
void saveCharacterSheet(const Character& character) {
    string fileName;
    cout << "Digite o nome do arquivo para salvar a ficha: ";
    cin.ignore();
    getline(cin, fileName);

    ofstream outFile(fileName);

    if (outFile.is_open()) {
        outFile << "Nome: " << character.name << endl;
        outFile << "Classe: " << character.characterClass << endl;
        outFile << "Nível: " << character.level << endl;
        outFile << "Raça: " << character.race << endl;
        outFile << "Pontos de Vida: " << character.healthPoints << endl;
        outFile << "Pontos de Ataque: " << character.attackPoints << endl;

        outFile << "Habilidades: " << endl;
        for (const auto& ability : character.abilities) {
            outFile << "- " << ability << endl;
        }

        outFile << "Equipamentos: " << endl;
        for (const auto& equipment : character.equipments) {
            outFile << "- Nome: " << equipment.name << ", Tipo: " << equipment.type << ", Atributo: " << equipment.attribute << ", Valor: " << equipment.value << endl;
        }

        cout << "Ficha de personagem salva com sucesso no arquivo \"" << fileName << "\"" << endl;
    } else {
        cout << "Não foi possível abrir o arquivo para salvar a ficha." << endl;
    }
}

// Implementação da função para carregar a ficha de personagem de um arquivo
void loadCharacterSheet(Character& character) {
    string fileName;
    cout << "Digite o nome do arquivo para carregar a ficha: ";
    cin.ignore();
    getline(cin, fileName);

    ifstream inFile(fileName);

    if (inFile.is_open()) {
        // Lê as informações da ficha de personagem do arquivo
        string line;
        while (getline(inFile, line)) {
            if (line.find("Nome: ") != string::npos) {
                character.name = line.substr(6);
            } else if (line.find("Classe: ") != string::npos) {
                character.characterClass = line.substr(8);
            } else if (line.find("Nível: ") != string::npos) {
                character.level = stoi(line.substr(7));
            } else if (line.find("Raça: ") != string::npos) {
                character.race = line.substr(6);
            } else if (line.find("Pontos de Vida: ") != string::npos) {
                character.healthPoints = stoi(line.substr(16));
            } else if (line.find("Pontos de Ataque: ") != string::npos) {
                character.attackPoints = stoi(line.substr(18));
            } else if (line.find("- ") != string::npos) {
                character.abilities.push_back(line.substr(2));
            } else if (line.find("Equipamentos: ") != string::npos) {
                // Não faz nada, apenas para identificar o início dos equipamentos no arquivo
            } else if (line.find("- Nome: ") != string::npos) {
                Equipment equipment;
                equipment.name = line.substr(8);
                getline(inFile, line);
                equipment.type = line.substr(8);
                getline(inFile, line);
                equipment.attribute = line.substr(12);
                getline(inFile, line);
                equipment.value = stoi(line.substr(8));
                character.equipments.push_back(equipment);
            }
        }

        cout << "Ficha de personagem carregada com sucesso do arquivo \"" << fileName << "\"" << endl;
    } else {
        cout << "Não foi possível abrir o arquivo para carregar a ficha." << endl;
    }
}

// Implementação da função para exibir a ficha completa do personagem
void displayCharacterSheet(const Character& character) {
    cout << "Ficha do personagem:" << endl;
    cout << "Nome: " << character.name << endl;
    cout << "Classe: " << character.characterClass << endl;
    cout << "Nível: " << character.level << endl;
    cout << "Raça: " << character.race << endl;
    cout << "Pontos de Vida: " << character.healthPoints << endl;
    cout << "Pontos de Ataque: " << character.attackPoints << endl;

    cout << "Habilidades: " << endl;
    for (const auto& ability : character.abilities) {
        cout << "- " << ability << endl;
    }

    cout << "Equipamentos: " << endl;
    for (const auto& equipment : character.equipments) {
        cout << "- Nome: " << equipment.name << ", Tipo: " << equipment.type << ", Atributo: " << equipment.attribute << ", Valor: " << equipment.value << endl;
    }
}

// Função principal (main)
int main() {
    Character playerCharacter;
    
    cout << "Bem-vindo(a) ao reino de Eldoria!" << endl;
    cout << "Crie sua ficha de personagem épica!" << endl;
    
    cout << "Nome do personagem: ";
    getline(cin, playerCharacter.name);
    
    cout << "Classe do personagem: ";
    getline(cin, playerCharacter.characterClass);
    
    cout << "Nível do personagem: ";
    cin >> playerCharacter.level;
    
    cout << "Raça do personagem: ";
    cin.ignore();
    getline(cin, playerCharacter.race);
    
    cout << "Pontos de Vida do personagem: ";
    cin >> playerCharacter.healthPoints;
    
    cout << "Pontos de Ataque do personagem: ";
    cin >> playerCharacter.attackPoints;
    
    int numAbilities;
    cout << "Quantas habilidades o personagem possui? ";
    cin >> numAbilities;
    
    cout << "Digite as habilidades do personagem:" << endl;
    cin.ignore();
    for (int i = 0; i < numAbilities; ++i) {
        string ability;
        getline(cin, ability);
        playerCharacter.abilities.push_back(ability);
    }
    
    int numEquipments;
    cout << "Quantos equipamentos o personagem possui? ";
    cin >> numEquipments;
    
    cout << "Digite os equipamentos do personagem:" << endl;
    cin.ignore();
    for (int i = 0; i < numEquipments; ++i) {
        addEquipment(playerCharacter);
    }

    // Exibir a ficha completa do personagem
    cout << endl << "Ficha do personagem criada com sucesso!" << endl;
    displayCharacterSheet(playerCharacter);

    // Nível Médio: Funcionalidades adicionais
    int option;
    while (true) {
        cout << endl;
        cout << "Escolha uma opção: " << endl;
        cout << "1 - Adicionar equipamento" << endl;
        cout << "2 - Remover equipamento" << endl;
        cout << "3 - Exibir lista de equipamentos" << endl;
        cout << "4 - Buscar equipamento por nome" << endl;
        cout << "5 - Salvar ficha de personagem em arquivo" << endl;
        cout << "6 - Carregar ficha de personagem de arquivo" << endl;
        cout << "0 - Sair" << endl;
        cin >> option;

        switch (option) {
            case 1:
                addEquipment(playerCharacter);
                break;
            case 2:
                removeEquipment(playerCharacter);
                break;
            case 3:
                displayEquipmentList(playerCharacter);
                break;
            case 4:
                searchEquipment(playerCharacter);
                break;
            case 5:
                saveCharacterSheet(playerCharacter);
                break;
            case 6:
                loadCharacterSheet(playerCharacter);
                break;
            case 0:
                cout << "Até logo!" << endl;
                return 0;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }
    }


    return 0;
}