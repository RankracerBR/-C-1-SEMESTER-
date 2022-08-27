#include <iostream>

using namespace::std;

int main(){
string palavra = "Araraquara";
int contador = 0;
  string upper = "";
for(int i = 0; i < palavra.size(); i++){ 
  cout << (char) toupper(palavra[i]) << " ";
  }
cout << endl;
for(int i = palavra.size() - 1; i >= 0; i--){
  cout << palavra[i] << " ";
  
}
cout << endl;
for(int i = 0; i < palavra.size(); i++){
  if(palavra[i] == 'a'){
    contador++;
  }
}
cout << "";  
  }
