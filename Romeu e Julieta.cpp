#include <iostream>
#include <unistd.h>
using namespace::std; 
// 3 romeu
// 5 julieta
// 3 e 5 romeu e julieta 

int main() {
int contador = 0; 
int maximo = 100;  
  while(contador < 100){ 
  contador++;
  if(contador % 15 == 0){
    cout << "Romeu e Julieta\n";
    }else if(contador % 3 == 0){ //modulo(se o numero for multiplo de 3 ele irá ser zero, pois não terá o resto da divisão)
    cout << "Romeu\n"; 
    }else if(contador % 5 == 0){
    cout << "Julieta\n";
    }else{
    cout << "Nenhum dos dois" << endl; 
    }  
    cout << contador << endl; 
    sleep(0);
    }
}
