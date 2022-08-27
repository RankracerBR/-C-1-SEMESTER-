#include <iostream>

using namespace::std;

int main() {
int segredo = 42;
int chute = 0; 
int tentativas = 0;
  while(tentativas < 5 && chute != segredo){ 
  cout << "Informe um chute: ";
  cin >> chute;
  tentativas = tentativas + 1;
  if(chute > segredo){
    cout << "Chute muito baixo\n";
  }else  if (chute < segredo){
    cout << "Chute muito baixo\n";
  }else{ 
   cout << "Você acertou o segredo\n"; 
   }
  }
}