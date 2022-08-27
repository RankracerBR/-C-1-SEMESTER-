#include <iostream>
using namespace std;

int main() {
  int quantidade = 0;
  cout << "Informe o tamanho: ";
  cin >> quantidade;
  for(int i = 0;i < quantidade; i++){
    for(int j = 0; j < quantidade; j++){
     if(i== 0 || i == quantidade -1 || j == 0 || j == quantidade -1 || i == j){ 
      cout << "* ";
    
       }else{
  cout << " ";     
}
       }
    cout << endl;
  }
}