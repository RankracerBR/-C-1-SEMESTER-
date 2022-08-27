#include <iostream>
// olhar questão da cedula
using namespace::std;

int main() {
int dias = 0;
int mes_1 = 1;
int mes_2 = 2;
int mes_3 = 1;
int anos_1 = 1;
int anos_2 = 2;
int anos_3 = 0;

cout << "Informe sua idade em dias: ";
cin >> dias; 

cout << (dias == 400) << "Você tem" << anos_1 << mes_1 << dias << endl;
cout << (dias == 800) << "Você tem" << anos_2 << mes_2 << dias << endl; 
cout << (dias ==30) << "Você tem" << anos_3 << mes_3 << dias << endl;

}