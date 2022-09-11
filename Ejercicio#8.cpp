#include <iostream>
using namespace std;

int suma(int num1, int num2);
int main(){
	float num1, num2;
	cout << "Ingrese el primer valor: " << endl;
	cin >> num1;
	cout << "Ingrese el segundo valor: " << endl;
	cin >> num2;
	cout << "El resultado de la suma de los numeros es de: " << suma(num1,num2) << endl; 
    }
    int suma (int num1, int num2){
    	int resultado;
    	resultado = num1 + num2;
    	return resultado;
	}