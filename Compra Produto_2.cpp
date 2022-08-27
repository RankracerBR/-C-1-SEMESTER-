#include <iostream>
#include <iomanip> //manipula a entrada e saída de dados :3 
                   //fixed = só mostra a parte decimal(ex: 123.333, vai sempre pegar os numero depois do ponto) 
                   //setprecision = mostra sempre uma quantidade de número decimal.  
using namespace::std; 

int main() {
int codigo = 0; 
int quantidade = 0; 
float preco = 0;
float total = 0;  
cout << "Informe o código do produto: ";
cin >> codigo; 
cout << "Informe a quantidade a ser comprada: "; 
cin >> quantidade;
  
if(codigo == 1) { 
  preco = 4;
}else if(codigo == 2){
  preco = 4.50;
}else if(codigo == 3){ 
  preco = 5.00;
}else if(codigo == 4){ 
  preco = 2.00;
}else if(codigo == 5){ 
  preco = 1.50; 
}else{ 
cout << "Codigo inválido\n";
}
total = preco * quantidade;
cout << fixed << setprecision(2);
cout << "Total: R$" << total << endl;   

}