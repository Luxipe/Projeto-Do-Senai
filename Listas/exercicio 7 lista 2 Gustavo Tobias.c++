#include <iostream>
using namespace std;

// vou utilizar a Função para converter os segundos em horas, minutos e segundos
void converterParaHorasMinutosSegundos(int segundos, int &horas, int &minutos, int &segundosFinais) {
    horas = segundos / 3600;           // vai Calcular o número de horas (1 hora = 3600 segundos)
    int segundosRestantes = segundos % 3600;  // vai calcular  o restante dos segundos após retirar as horas
    minutos = segundosRestantes / 60;  // vai Calcular o número de minutos (1 minuto = 60 segundos)
    segundosFinais = segundosRestantes % 60;  // vai Calcular o restante dos segundos após retirar os minutos
}

int main() {
    int segundosInput;
    cout << "Digite a quantidade de segundos: ";
    cin >> segundosInput;

    if (segundosInput < 0) {
        cout << "Por favor, digite um valor positivo." << endl;
        return 1;  // Sai do programa com código de erro 1 se a entrada for negativa
    }

    int horas, minutos, segundosFinais;
    converterParaHorasMinutosSegundos(segundosInput, horas, minutos, segundosFinais);

    // vai Exibir o resultado no formato de horas, minutos e segundos
    cout << segundosInput << " segundos equivalem a: " << horas << " horas, " << minutos << " minutos e " << segundosFinais << " segundos." << endl;

    return 0;  // vai Indicar que o programa foi executado com perfeição.
}