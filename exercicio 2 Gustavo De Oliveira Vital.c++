#include <iostream>
using namespace std;

int main() {
    double numero1, numero2;
    char operacao;
    bool continuar = true;

    while (continuar) {
        // Receber os dois números de entrada
        cout << "Digite o primeiro número: ";
        cin >> numero1;

        cout << "Digite o segundo número: ";
        cin >> numero2;

        // Mostrar o menu de operações
        cout << "----- Menu de Operações -----" << endl;
        cout << "1. Somar" << endl;
        cout << "2. Subtrair" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "Escolha a operação (1/2/3/4): ";
        cin >> operacao;

        // Realizar a operação selecionada
        switch (operacao) {
            case '1':
                cout << "Resultado da soma: " << numero1 + numero2 << endl;
                break;
            case '2':
                cout << "Resultado da subtração: " << numero1 - numero2 << endl;
                break;
            case '3':
                cout << "Resultado da multiplicação: " << numero1 * numero2 << endl;
                break;
            case '4':
                if (numero2 != 0) {
                    cout << "Resultado da divisão: " << numero1 / numero2 << endl;
                } else {
                    cout << "Erro: divisão por zero não é permitida." << endl;
                }
                break;
            default:
                cout << "Opção inválida. Por favor, escolha uma operação válida." << endl;
        }

        // Perguntar se deseja continuar
        char resposta;
        cout << "Deseja realizar outra operação? (S/N): ";
        cin >> resposta;

        if (resposta == 'N' || resposta == 'n') {
            continuar = false;
        }
    }

    cout << "Programa encerrado. Obrigado por utilizar!" << endl;
    return 0;
}