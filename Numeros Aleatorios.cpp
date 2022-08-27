#include <iostream>

using namespace::std;

int main() {
   srand(time(NULL)); //seed rand // time = tempo da maquina(precisa do srand e time(null)) pra o codigo gerar um numero a cada minuto depois do codigo rodar.
   int contador_1 = 0;
   int contador_2 = 0; 
   int contador_3 = 0;
   int numero = 0;
   for(int i=0; i<10; i++){  
  numero = (rand() % 6) + 1;
  cout << numero << endl;
  }
    if(numero == 1){ 
    contador_1++;
  }else if(numero == 2) { 
    contador_2++;
  }else if(numero == 3){
      contador_3++;
  }
cout << "Foram gerados " << contador_1 << " números\n";
cout << "Foram gerados " << contador_2 << " números\n";
cout << "Foram gerados " << contador_3 << " números\n"; 
}