#include <iostream>

using namespace::std; 

int main() {  
float valor = 0;
string nome = "";
float residencia_valor_1 = 0.40; 
float comercio_valor_1 = 0.55; 
float industria_valor_1 = 0.55;
float residencia_valor_2 = 0.65;
float comercio_valor_2 = 0.60;
float industria_valor_2 = 0.60;

cout << "Você trabalha em uma residência, comercio ou industria: ";
cin >> nome;   
cout << "Quantos kWH foram gastos: ";
cin >> valor; 
  
if(nome == "residencia" && valor <= 500){
cout << "O valor à ser pago será: " << valor  * residencia_valor_1 << endl; 
}else if(valor > 500){ 
cout << "O valor à ser pago será: " << valor * residencia_valor_2 << endl;
}
if(nome == "comercio" && valor <= 1000){ 
cout << "O valor à ser pago será: " << valor * comercio_valor_1 << endl; 
}else if( nome == "comercio" && valor > 1000){   
cout << "O valor à ser pago será: " << valor * comercio_valor_2 << endl; 
}
if(nome == "industria" && valor <= 5000){ 
cout << "O valor à ser pago será: " << valor * industria_valor_1 << endl; 
}else if(nome =="industria" && valor > 5000)
cout << "O valor à ser pago será: " << valor * industria_valor_2 << endl;
 }
