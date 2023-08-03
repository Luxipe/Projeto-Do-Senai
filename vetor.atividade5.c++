#include <iostream>
#include <limits> // vou utilizar o std::numeric_limits

using namespace std;

int main() {
    const int tamanhoVetor = 7;
    float vetor[tamanhoVetor];
    
    cout << "Digite 7 numeros reais:" << endl;
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << "Digite o " << i + 1 << "º numero: ";
        
        // isso vai ser um Loop para verificar e validar a entrada do usuário 
        while (!(cin >> vetor[i])) {
            // ele vai  Limpar o buffer de entrada em caso de erro
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada invalida. Digite novamente: ";
        }
    }
    
    // vai  Inicializar as variáveis para armazenar o maior e menor valor
    float maior = vetor[0];
    float menor = vetor[0];
    
    // ele vai  Procura o maior e o menor valor no vetor
    for (int i = 1; i < tamanhoVetor; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    
    cout << "O maior valor e: " << maior << endl;
    cout << "O menor valor e: " << menor << endl;
    
    return 0;
}



