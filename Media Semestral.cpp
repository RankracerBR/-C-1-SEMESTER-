#include <iostream>

using namespace::std;

int main() {

float nota_1;
float nota_2;

float media_semestral;   

cout << "Digite sua primeira nota: ";
cin >> nota_1;  

cout << "Digite sua segunda nota: ";
cin >> nota_2;

media_semestral = nota_1 + nota_2 / 2.0;

if(nota_1 < 0.0){
cout << "Nota inválida";  
}
if(nota_2 < 0.0){
cout << "Nota inválida";  
}  

cout << "Sua média semestral foi: " << media_semestral;  
  
}