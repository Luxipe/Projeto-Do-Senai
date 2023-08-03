#include <iostream>
#include <ctime> // Biblioteca para usar a função time()
#include <cstdlib> // Biblioteca para usar a função rand()

using namespace std;

int main() {
    const int tamanhoVetor = 4;
    int vetor[tamanhoVetor];
    
    // Inicializar a semente do gerador de números aleatórios
    srand(time(0)); // A semente é usada para garantir que os números aleatórios sejam diferentes em cada execução do programa.
    
    // Preencher o vetor com valores aleatórios entre 1 e 10
    for (int i = 0; i < tamanhoVetor; i++) {
        vetor[i] = rand() % 10 + 1; // Preenche o vetor com números aleatórios entre 1 e 10.
    }
    
    // Pedir ao usuário para adivinhar um número do vetor
    int palpite;
    cout << "Tente adivinhar um dos números do vetor (entre 1 e 10): ";
    cin >> palpite; // Obtém o palpite do usuário.
    
    // Verificar se o palpite está correto
    bool acertou = false;
    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetor[i] == palpite) {
            acertou = true; // Se o palpite do usuário estiver correto, definimos a variável acertou como verdadeira e saímos do loop.
            break;
        }
    }
    
    // Mostrar o resultado
    if (acertou) {
        cout << "Parabéns! Seu palpite está correto." << endl; // Se a variável acertou for verdadeira, o palpite do usuário está correto.
    } else {
        cout << "Ops! Seu palpite está incorreto." << endl; // Caso contrário, o palpite está incorreto.
    }
    
    // Mostrar os números do vetor
    cout << "Números do vetor: ";
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << vetor[i] << " "; // Mostra os números do vetor na tela.
    }
    cout << endl;
    
    return 0;
}