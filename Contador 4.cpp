#include <iostream>

using namespace::std;

int main(){ 
int maximo = 0; 
int contador = 1; 
cout << "Informe o valor máximo da sequência: ";
cin >> maximo;
while(contador <= maximo){ 
   if(contador % 2 == 1){  
     cout << contador << " ";
  }  
  contador = contador + 2;
 }
}