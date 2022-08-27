#include <iostream>

using namespace::std; 

int main() {

int valor = 0;     
int cedulas_100 = 0; 
int cedulas_50 = 0; 
int cedulas_20 = 0;
int cedulas_10 = 0;
int cedulas_5 = 0; 
int cedulas_2 = 0;
int cedulas_1 = 0; 
int resto = 0;
  
cout << "Informe o valor a ser sacado: ";
cin >> valor; 
  
cedulas_100 = valor / 100; 
resto = valor % 100; 

cedulas_50 = resto / 50; 
resto = resto % 50;

cedulas_20 = resto / 20; 
resto = resto % 20; 

cedulas_10 = resto / 10; 
resto = resto % 10; 
  
cedulas_5 = resto / 5; 
resto = resto % 5; 

cedulas_2 = resto / 2; 
cedulas_1 = resto % 2; 
  
if(cedulas_100 > 0){ 
  if(cedulas_100 > 1){ 
   cout << "São necessárias " << cedulas_100 << "notas de R$ 100.00\n"; 
}else{   
 cout << "É necessario uma nota de R$ 100.00\n"; 
  }   
}
if(cedulas_50 > 0){ 
 if(cedulas_50 > 1){ 
  cout << "São necessárias " << cedulas_50 << " notas de R$50.00"; 
}else{ 
  cout << "É necessário uma de R$ 50.00\n";
 }
}
  if(cedulas_20 > 0){   
   if(cedulas_20 > 1){ 
  cout << "São necessárias " << cedulas_20 << " notas de R$ 20.00";
}else{ 
cout << "É necessário uma nota de R$20.00\n";   
 }
}   
if(cedulas_10 > 0){ 
  if(cedulas_10 > 1){ 
  cout << "São necessárias " << cedulas_10 << " notas de R$ 10.00\n"; 
}else{ 
 cout << "É necessário uma nota de R$ 10.00\n"; 
 }
}  
if(cedulas_5 > 0){ 
 if(cedulas_5 > 1){
 cout << "São necessários " << cedulas_5 << " notas de R$ 5.00\n"; 
}else{ 
 cout << "É necessário uma nota de R$ 5.00\n"; 
 }
}  

if(cedulas_2 > 0){ 
  if(cedulas_2 > 1){ 
 cout << "São necessárias " << cedulas_2 << " notas de R$ 2.00\n";
    }
  } 
 } 
