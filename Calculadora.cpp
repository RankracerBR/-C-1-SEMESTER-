#include <iostream>

using namespace::std; 

int main() {
int numero_1 = 0;
int numero_2 = 0;
int resultado = 0;
string operacao = "";

cout << "Informe o primeiro numero: ";
cin >> numero_1; 

cout << "Informe o segundo numero: "; 
cin >> numero_2;

cout << "Qual operação você deseja realizar (+,-,*,/): "; 
cin >> operacao;

if(operacao == "+"){
  resultado = numero_1 + numero_2; 
}else if(operacao == "-"){ 
  resultado = numero_1 - numero_2; 
}else if(operacao == "*"){ 
 resultado = numero_1 * numero_2;
}else if(operacao == "/"){ 
resultado = numero_1 / numero_2;  

if(numero_2 != 0){ 
  resultado = numero_1 / numero_2;
}else{   
resultado = 0;
} 
  
}else{ 
cout << "Operação inválida\n"; 
resultado = 0; 
}

cout << "O resultado da operação é " << resultado << endl;

if(resultado >= 0){ 
cout << "O resultado é positivo\n"; 
}else{ 
cout << "O resultado é negativo\n";
}
if(resultado % 2 == 0){ 
cout << "O resultado é par\n";
}else{ 
cout << "O resultado é impar\n";
 }
}