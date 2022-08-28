#include <iostream>

using namespace::std;

int fatorial(int numero){
int acumulador = 1;  
while(numero > 1){
acumulador = acumulador * numero;
numero --;
  }
  return acumulador; 
  }

int main() {
cout << "Fatorial de 5 é " << fatorial(2) << endl;
cout << "Fatorial de 10 é " << fatorial(5) << endl;
cout << "Fatorial de 10 é " << fatorial(10) << endl;
}