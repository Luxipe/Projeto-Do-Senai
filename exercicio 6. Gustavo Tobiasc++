#include <iostream>

using namespace std;

// vou utilizar uma Função para verificar se é possível formar um triângulo
bool verificar_triângulo(double lado1, double lado2, double lado3) {
    return (lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1);
}

// vou utilizar uma Função para determinar o tipo de triângulo
string tipo_triângulo(double lado1, double lado2, double lado3) {
    if (lado1 == lado2 && lado1 == lado3) {
        return "Triângulo Equilátero";
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        return "Triângulo Isósceles";
    } else {
        return "Triângulo Escaleno";
    }
}

int main() {
    cout << "Verificador de Triângulo e Tipo" << endl;

    double lado1, lado2, lado3;

    // Vai Solicitar ao usuário que insira os valores dos lados do triângulo
    cout << "Digite o valor do primeiro lado do triângulo: ";
    cin >> lado1;

    cout << "Digite o valor do segundo lado do triângulo: ";
    cin >> lado2;

    cout << "Digite o valor do terceiro lado do triângulo: ";
    cin >> lado3;

    // Vou Verificar se é possível formar um triângulo com os valores fornecidos
    if (verificar_triângulo(lado1, lado2, lado3)) {
        // Se for possível formar um triângulo, determinar o tipo de triângulo
        string tipo = tipo_triângulo(lado1, lado2, lado3);
        cout << "É possível formar um " << tipo << "." << endl;
    } else {
        // Caso contrário, informar que não é possível formar um triângulo
        cout << "Não é possível formar um triângulo com os lados fornecidos." << endl; 
    }

    return 0;
}