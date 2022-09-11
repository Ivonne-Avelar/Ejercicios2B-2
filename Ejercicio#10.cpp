#include <iostream>
using namespace std;

float calcularP(float lado);

int main(){
	double lado;
	cout << "Ingrese el lado del cuadrado: " << endl;
	cin >> lado;
	cout << "El perímetro del cuadrado es: " << calcularP(lado) ;
	return 0;
}

float calcularP(float lado){
	double perimetro = lado * 4;
return perimetro;
}