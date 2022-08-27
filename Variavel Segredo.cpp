#include <iostream>

using namespace::std;
//variáveis 
int main() {
int segredo = 42; 
int chute = 0; 

cout << "Informe um chute: "; 
cin >> chute; 
 
if(chute == segredo){ 
cout << "Você acertou\n";  
}else if( chute > segredo){   
cout << "Você não acertou\n";  
cout << "O seu chute foi muito alto\n";
}else{ 
cout << "Você errou\n";
cout << "O seu chute foi muito baixo";
  }

}