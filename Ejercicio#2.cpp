#include<iostream>
using namespace std;

int main(){
	int sum, f, val, prom;
	sum= 0;
	for(f=1; f<=3; f++){
		cout <<"Ingrese el valor: ";
		cin >> val;
		sum = sum + val;
	}
	cout << "La suma es de: "  << sum << "\n";
	prom = sum / 3;
	cout << "El promedio es de: " << prom << endl;
}