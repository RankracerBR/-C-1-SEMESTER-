#include <iostream>

using namespace::std;

int main() {
int nota_1 = 0;
string nome = "";
int nota_2 = 0;
int media = 0;
float percentual = 0.0;
float valor_do_aumento = 0.0;
cout << "Qual o seu nome: ";
cin >> nome;
cout << "Informe a nota 1: "; 
cin >> nota_1;
cout << "Informe a nota 2: "; 
cin >> nota_2;
media = (nota_1 + nota_2);
cout << "O aluno " << nome << " Tirou a media: " << media << endl;
cout << "Informe o percentual de aumento: ";
cin >> percentual;
valor_do_aumento = media * (percentual / 100); 
cout << "O valor do aumento: " << valor_do_aumento << endl;
media = media + valor_do_aumento; 
cout << "A nova média é " << media << endl; 
  }