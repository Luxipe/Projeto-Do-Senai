#include <iostream>
#include <algorithm>
#include <string>
#include <windows.h>
using namespace std;
int main() {
    string vetor[5] = {"Brasil","Estados Unidos", "Noruega", "Aleamanha","Japão"};
    sort(vetor, vetor + 5);
    for (int i = 0; i < 5 ; i++){
    cout << vetor[i] << endl;
    }
    return 0;
}