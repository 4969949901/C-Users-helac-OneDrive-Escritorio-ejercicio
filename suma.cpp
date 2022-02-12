// suma de dos valores
#include<iostream>
using namespace std;

int main()

{
  int num1;
  int num2;
  int resultado;
  std::cout <<"Suma de dos valores\n";
  std::cout << "Ingrese el primer numero\n";
  std::cin >> num1;
  std::cout << "Ingrese el segundo numero\n";
  std::cin >> num2;
  resultado = num1 + num2;
  std::cout << resultado << "\n";

  return 0;
}