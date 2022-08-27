#include <iostream>

using namespace::std;

int main() {
float velocidade = 0; 

cout << "Qual foi a velocidade do seu carro na BR-230: "; 
cin >> velocidade;

if(velocidade < 80)
cout << "Você não foi multado :3";

if(velocidade > 80)
cout << "Você recebeu uma multa de R$5,00 >:3";
  }