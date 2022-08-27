#include <iostream>

using namespace::std; 

int main() {
float valor_1 = 0;
float valor_2 = 0;
float valor_3 = 0;

cout << "Digite um número: ";   
cin >> valor_1;
cout << "Digite um segundo valor: ";
cin >> valor_2;
cout << "Digite um terceiro valor: ";
cin >> valor_3;
  
if(valor_1>valor_2)
cout << "O valor" << valor_1 << "é menor que o valor" << valor_2 << endl;
if(valor_1>valor_3)
cout << "O valor" << valor_1 << "é maior que o valor" << valor_3 << endl;
if(valor_1<valor_2)
cout << "O valor" << valor_1 << "é menor que o valor" << valor_2 << endl;
if(valor_1<valor_3)
cout << "O valor" << valor_1 << "é menor que o valor" << valor_3 << endl;

if(valor_2>valor_1)
cout << "O valor" << valor_2 << "é maior que o valor" << valor_1 << endl;
if(valor_2>valor_3)
cout << "O valor" << valor_2 << "é maior que o valor" << valor_3 << endl;
if(valor_2<valor_3)
cout << "O valor" << valor_2 << "é menor que o valor" << valor_3 << endl;
if(valor_2<valor_1)
cout << "O valor" << valor_2 << "é menor que o valor" << valor_1 << endl; 
if(valor_3>valor_1)
cout << "O valor" << valor_3 << "é menor que o valor" << valor_1 << endl;
if(valor_3>valor_2)
cout << "O valor" << valor_3 << "é maior que o valor" << valor_2 << endl;
if(valor_3<valor_1)
 cout << "O valor" << valor_3 << "é menor que o valor" << valor_1 << endl;
if(valor_3<valor_2)
cout << "O valor" << valor_3 << "é menor que o valor" << valor_1 << endl;  
  
}