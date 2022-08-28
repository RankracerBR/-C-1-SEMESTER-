#include <iostream>

using namespace::std;

int gerar_aleatorio (int faixa, int inicio, int fim){

int numero = rand() % faixa;
return numero;  
}

string par_ou_impar(int numero){
 string resultado;
  if(numero % 2 == 0){
   resultado = "par";
}else{
 resultado = "impar";   
}
return resultado;
}

string posiivo_ou_negativo(int numero){
string resultado = "";  
if()
  
  }

int main() {
srand(time(NULL));
int valor = gerar_aleatorio(1001);
int valor2 = gerar_aleatorio(10);
cout << "O número gerado foi: " << valor << endl;
cout << "O número gerado foi: " << valor2 << endl;

 string valor_par = par_ou_impar(valor);  
  }