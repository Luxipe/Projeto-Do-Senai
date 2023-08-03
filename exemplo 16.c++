#include <iostream>
#include <iomanip>
int soma(int a, int b) {
    return a + b;
}
int subtracao(int a, int b) {
    return a - b;
}
    int multip(int a, int b) {
       return a *b;
}

double divisao(int a, int b) {
        return static_cast<double>(a) / b;
}

int main() {


    int num1;
    std::cout << "Fale algum número : ";
    std::cin >> num1;

    int num2;
    std::cout << "Fale algum número : ";
    std::cin >> num2;

   int result1 = soma(num1,num2);
   int result2 = subtracao(num1,num2);
   int result3 = multip(num1, num2);
   double result4 = divisao(num1,num2);

   std::cout << "Soma " << result1 << std::endl;
   std::cout << "subtracao " <<result2 << std::endl;
   std::cout << "multiplicacao " <<result3 << std::endl;
   std::cout << std::fixed << std::setprecision(2);  
   std::cout << "divisao " <<result4 << std::endl;

}