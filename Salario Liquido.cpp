#include <iostream>

using namespace::std; 

int main() {
int salario_bruto = 0;
int inss = 0; 
int ir = 0;
int sindicato = 0;  

cout << "Qual o seu salario bruto: ";
cin >> salario_bruto;

cout << "Quanto você contribuiu no imposto de renda: ";
cin >> ir; 

cout << "Quanto você pagou ao inss: ";
cin >> inss; 

cout << "Quanto você pagou ao sindicato: ";
cin >> sindicato;

float media = salario_bruto + inss + ir + sindicato / 100;

cout << "Seu salário liquido é: " << media << endl;
  
  
}