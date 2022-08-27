#include <iostream>

using namespace::std;

int main() {
int A = 0;
int B = 0;
int resultado = 0;
cout << "Digite um valor: ";  
cin >> A;

cout << "Digite outro valor: ";  
cin >> B;  

resultado = A / B; 

if( resultado == 4 ){
cout << "São multiplos";  
}else{   
cout << "Não são múltiplos";  
  }
  }