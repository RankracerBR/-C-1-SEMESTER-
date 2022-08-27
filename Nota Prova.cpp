#include <iostream>
/////////////////////////// Augusto
using namespace::std;
///////////////////////////// Pontes
int main() {
float nota = 0;

cout << "Digite sua nota: ";
cin >> nota;
  
if(nota == 0){  
cout << "Você tirou (E) na prova";
}
if(nota >= 1 && 35){  
cout << "Você tirou (D) na prova";
}

if(nota >= 36 && 60 ){ 
cout << "Você tirou (C) na prova";  
}

if(nota >= 61 && 85){  
cout << "Você tirou (B) na prova";
}

if(nota >= 86 && 100){ 
cout << "Você tirou (A) na prova";  
  }
}
  