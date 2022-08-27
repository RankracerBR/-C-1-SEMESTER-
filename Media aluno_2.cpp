#include <iostream>
using namespace::std;
int main() {
string nome = "";
float nota_1 = 0;
float nota_2 = 0; 
float media = 0; 

cout << "Informe o seu nome: ";
cin >> nome; 
cout << "Informe a primeira nota: "; 
cin >> nota_1; 
cout << "Informe a segunda nota: ";  
cin >> nota_2;

media = nota_1 + nota_2 / 2;   

cout << "A média de " << nome << " foi " << media << endl; 

  if(media >= 70){
  cout << "Parabéns " << nome << " você foi aprovado\n";     
  } 
   
  if(media < 70){
  if(media >= 40){
  cout << nome << " foi para a final :)";
  }
  cout << "Você foi REPROVADO >:3";  
  } 
   
  
  }