#include <iostream>

using namespace::std; 

int main(){
int idade = 0;
int ano = 0;
string nome = "";

cout << "Qual o seu nome: ";
cin >> nome; 
cout << "Qual a sua idade: ";
cin>> idade;

ano = 2022 - idade;  
cout << nome << " nasceu em " << ano;

if (idade >= 18) {  
cout << "Você pode tirar a carteira de motorista\n";
cout << "Se dirija ao dentran";
} 
if ( nome == "fulano"){  
cout << " Parabéns :3, o senhor foi premiado\n";  
}
if (idade <= 17){
cout << " Você não pode tirar carteira de motorista\n"; 
cout << " Volte para o seu forza horizontes >:3 \n";  
cin >> idade;    
}  
if (nome == "fulano"){  
cout << " Infelizmente o senhor não foi premiado :( "; 
    
if(nome != "fulano" ){
    cout<< " Você não foi premiado :(\n";

    
  
   }
  }
 }
 