#include <iostream>

using namespace ::std;

int main() {

  float minutos_1 = 0;
  float taxa_1 = 0.20;
  float taxa_2 = 0.15;
  float taxa_3 = 0.18;

  cout << "Quantos minutos você ficou em ligação ?:";
  cin >> minutos_1;

  if (minutos_1 == 200 * taxa_1) {
    cout << "Você pagará uma taxa de:" << minutos_1 * taxa_1 << endl;
  }
  if (minutos_1 == 400 * taxa_2) {
    cout << "Você pagará uma taxa de:" << minutos_1 * taxa_2 << endl;

  }else{    

 cout << "Você pagará uma taxa de:" << minutos_1 * taxa_3 << endl; 
}
}