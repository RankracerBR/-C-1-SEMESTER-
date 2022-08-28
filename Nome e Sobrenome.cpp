#include <iostream>

using namespace::std;

void mostrar_dados(string nome, string sobrenome, int idade){  /*void(vazio ou não retorna nada)*/    
cout << "Os dados do usuário são: \n";
cout << "NOME: " << nome << endl;
cout << "SOBRENOME: " << sobrenome << endl;
cout << "IDADE: " << idade << endl;
  
  
}                         

int main() {
string nome ="";
string sobrenome = ""; 
int idade = 0;
  cout << "Informe o seu nome: ";
  cin >> nome;
  cout << "Informe o seu sobrenome: ";
  cin >> sobrenome; 
  cout << "Informe sua idade: ";
  cin >> idade; 
  
  mostrar_dados(nome,sobrenome,idade); 
  }