#include <iostream>

using namespace::std; 

int main() {
float salario_1 = 0;
float valor_casa_1 = 0;
float anos_pagar_1 = 0; 
float prestacao = salario_1 / 100; 

cout << "Qual o valor do seu salário: ";
cin >> salario_1;
cout << "Qual o valor da casa: ";
cin >> valor_casa_1;
cout << "Quantos anos você pretende pagar pela casa: "; 
cin >> anos_pagar_1; 

if(prestacao > salario_1){ 
cout << "Você não poderá pagar pela casa" << endl;
}
if (prestacao < salario_1){    
cout << "Você poderá pagar pela casa" << endl;
}
if(anos_pagar_1 > 30){  
cout << "Você não poderá pagar pela casa" << endl;
}
if(anos_pagar_1 < 30){ 
cout << "Você poderá pagar pela casa" << endl;
}
cout << "Valor total: " << (salario_1 / valor_casa_1) * anos_pagar_1 << endl; 

}  