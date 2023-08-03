#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um número: ";
    
    // vai  Verificar se a entrada é um valor numérico válido
    if (!(cin >> num)) {
        cout << "Entrada inválida. Certifique-se de digitar um valor numérico." << endl;
        return 1; // Encerra o programa com código de erro (1) indicando falha
    }

    // vai  Verificar se o número é positivo
    if (num > 0)
        cout << "O número é positivo." << endl;
    // Se não for positivo, verifica se é negativo
    else if (num < 0)
        cout << "O número é negativo." << endl;
    // Se não for nem positivo nem negativo, é zero
    else
        cout << "O número é zero." << endl;

    return 0; // vai  Encerrar o programa com código de sucesso (0) indicando execução bem-sucedida
}