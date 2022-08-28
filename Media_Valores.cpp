#include <iostream>

using namespace::std;

int main() {

int valor_1;
int valor_2;
int valor_3;
int valor_4;
int valor_5;
int valor_6;

int media;
  
cout << "Digite o valor 1: " << endl;
cin >> valor_1;
  cout << "Digite o valor 2: " << endl;
cin >> valor_2;
  cout << "Digite o valor 3: " << endl;
cin >> valor_3;
  cout << "Digite o valor 4: " << endl;
cin >> valor_4;
  cout << "Digite o valor 5: " << endl;
cin >> valor_5;
  cout << "Digite o valor 6: " << endl;
cin >> valor_6;
for(int i = 1; i >= valor_1; i++ ){
   if(valor_1 <= i){
 cout << "Valor negativo" << endl;
  break;
     }else{
  cout << valor_1 << endl;
   }
}
for(int i = 1; i >= valor_2; i++){
  if(valor_2 <= i){
cout << "Valor negativo" << endl;   
 break;
    }else{
cout << valor_2 << endl;    
  }
}
for(int i = 1; i >= valor_3; i++){
 if(valor_3 <= i){
 cout << "Valor negativo: " << endl;  
break;
   }else{
cout << valor_3 << endl;   
 } 
}
for(int i = 1; i >= valor_4; i++){
  if(valor_4 <= i){
cout << "Valor negativo: " << endl;    
 break;
    }else{
cout << valor_4 << endl;    
  }
}
for(int i = 1; i >= valor_5; i++){
  if(valor_5 <= i){
cout << "Valor negativo: " << endl;   
  break;
    }else{
cout << valor_5 << endl;    
  }
}
for(int i = 1; i >= valor_6; i++){
  if(valor_6 <= i){
 cout << "Valor negativo" << endl;   
  }else{ 
cout << valor_6;    
  }
}

media = (valor_1 + valor_2 + valor_3 + valor_4 + valor_5 + valor_6) / 6;
if(media > 0){
cout << "Média de todas as notas: " << " " << media << endl;  
} else if(valor_1 || valor_2 || valor_3 || valor_4 || valor_5 || valor_5 < 0){
cout << "Valor(es) negativo(s): " << valor_1 || valor_2 || valor_3 || valor_4 || valor_5 || valor_6;

}else if(valor_1|| valor_2 || valor_3 || valor_4 || valor_5 || valor_6 > 0){
cout << media; 
}
  
  
  } 