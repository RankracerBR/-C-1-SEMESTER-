#include <iostream>

using namespace::std;

int main(){
  string nome = "Empada";
  int tamanho = nome.size();
  int ultimo = tamanho - 1;
  cout << "Primeira letra: " << nome[0] << endl;
  cout << "Última letra: " << nome[ultimo] << endl;
  }