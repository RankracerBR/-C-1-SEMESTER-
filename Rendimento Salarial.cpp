#include <iostream>

using namespace::std; 

int main() {
string nome = "";
float salario = 0;  
 cout << "Qual o seu nome: ";
 cin >> nome;

cout << "_______________________________"<<endl;
cout << "Qual o seu rendimento salaria: " <<endl; 
cout << "--------------------------------" <<endl;
cin >> salario; 
  
if(salario > 1250)
cout << "Parabéns " << nome << " você recebeu um aumento de 10%"; 
if(salario < 1250)
cout << "Parabéns" << nome << " você recebeu um aumento de 5%";   
}