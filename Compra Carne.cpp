#include <iostream>

using namespace::std;

int main() {
string carne = ""; 
string pagamento = "";
float quantidade = 0;
float file_1 = 4.90; 
float alcatra_1 = 5.90;
float picanha_1 = 6.90; 

float file_2 = 5.80;
float alcatra_2 = 6.80; 
float picanha_2 = 7.80;

cout << "Qual o tipo de carne você comprou: ";   
cin >> carne; 
cout << "Qual a quantidade de carne que você comprou: ";
cin >> quantidade;  
cout << "Qual meio de pagamento você irá efetuar: ";
cin >> pagamento;

if(pagamento == "cartao" && carne == "file" && quantidade <= 5 ){ 
cout << "Você irá pagar no filé: " << quantidade * file_1 << endl; 
}else if( pagamento == "cartao" && carne == "file" && quantidade > 5){
  cout << "Você irá pagar no filé: " << quantidade * file_2 << endl; 
}
if(pagamento == "cartao" && carne == "alcatra" && quantidade <= 5 ){ 
cout << "Você irá pagar na alcatra: " << quantidade * alcatra_1 << endl;
}else if( carne == "alcatra" && quantidade > 5){    
 cout << "Voce irá pagar na alcatra: " << quantidade * alcatra_2 << endl; 
}
if(pagamento == "cartao" && carne == "picanha" && quantidade <= 5 ){
cout << "Você irá pagar pela picanha: " << quantidade * picanha_1 << endl; 
}else if(carne == "picanha" && quantidade > 5)
cout << "Você irá pagar pela picanha: " << quantidade * picanha_2 << endl;
 
 }  