#include <iostream>
using namespace std;

int main() {
    int arr[5] = {3, 1, 5, 2, 4};

    // o Loop para ordenar o vetor em ordem crescente
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] > arr[j]) {
                // Troca os valores utilizando uma variável temporária
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //vai  Imprimir o vetor ordenado
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}