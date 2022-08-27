#include <iostream>

using namespace::std;

int main(){
int numero = 1;
//int contador = 1; 
int acumulador = 1;
cout<< "Informe o valor do fatorial: ";
cin >> numero;

if(numero != 0){   
while(numero >= 1){
  acumulador = acumulador * numero;
  numero--;
  }
} 
  
  cout << "O resultado é: " << acumulador << endl;
  
}