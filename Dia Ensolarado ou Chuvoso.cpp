#include <iostream>

using namespace::std;

int main() {
string ensolarado = "";
float temperatura = 0; 
  
cout << "O dia está ensolarado? (sim/não)";
cin >> ensolarado;  
  
cout << "Informe a temperatura do dia: ";  
cin >> temperatura;  

if(ensolarado == "sim"){ 
cout << "Passe protetor solar e pode sair de casa🌞\n"; 
}else if(ensolarado == "nao" or temperatura < 20){ 
cout << "Saia com um guarda chuva\n";
  } 
}