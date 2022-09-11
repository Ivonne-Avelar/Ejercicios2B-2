#include <iostream>
using namespace std;

int main(){
	int numero = 0;
	int suma = 0;
	
	do{
		suma += numero;
		
	cout << "Ingrese un número: ";
	cin >> numero;
	}
	while (numero >= 0);
	cout << "\nLa suma es " << suma << endl;
	
	return 0;
}