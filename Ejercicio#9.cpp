#include <iostream>
using namespace std;

long potencia(int base, int exponente);

int main (){
	int base, exponente;
	long resultado;
	cout<<"Ingresa la base: "; cin>>base;
	cout<<"Ingresa el exponente: "; cin>>exponente;
	resultado = potencia(base,exponente);
	cout<<"El resultado es:  "<<resultado<<endl;
	return 0;
}

long potencia(int base, int exponente){
	if(exponente != 1){
		return base * potencia(base, exponente - 1);
	}else{
		return base;
	}
}