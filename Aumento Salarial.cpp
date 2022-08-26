#include <iostream>

using namespace::std;

int main() {
string nome = "";
int salario = 0;
float percentual = 0.0;
float valor_do_aumento = 0.0;
cout << "Qual o seu nome: ";
cin >> nome;
cout << "Informe o seu salário mensal: ";
cin >> salario; 
cout << "Informe o percentual: ";
cin >> percentual;
valor_do_aumento = salario * (percentual / 100);
cout << "O valor do aumento: " << valor_do_aumento << endl; 
}