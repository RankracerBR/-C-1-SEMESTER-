#include <iostream>

using namespace::std;

int main() {
string resposta = "sim";
int idade = 0;
int contador = 0;
int soma = 0;  
int media = 0;
while(resposta == "sim" || resposta == "Sim"){
  cout << "Informe uma idade: "; 
  cin >> idade; 
  contador = contador + 1; 
  soma = soma + idade;
  cout << "Deseja continuar: (sim/não)"; 
  cin >> resposta; 
   } 
 media = soma / contador; 
 cout << "Forma informadas " << contador << " idades\n";
 cout << "A média das idades é " << media << endl; 
   }