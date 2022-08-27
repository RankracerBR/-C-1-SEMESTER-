#include <iostream>

using namespace::std; 

int main() { 
int idade = 0;   
cout << "Informe a sua idade: ";  
cin >> idade;  
if(idade < 16){   
cout << "Você não pode votar ainda\n";   
}else if(idade >= 16 and idade < 18){ 
cout << "Você pode votar\n";  
cout << "Mas o voto é opicional\n";    
}else if(idade >= 18 and idade <= 69){
 cout << "Você é obrigado a vota\n";  
}else{ 
cout << "Você já trabalhou muito\n"; 
cout << "Você não precisa votar\n"; 
 }
}