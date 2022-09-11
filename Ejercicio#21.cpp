#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int x,n,c=0,s=0;
	cout <<"Ingrese la cantidad de números: ";
	cin>>n;
	while(c<n)
	{
		cout<<"Ingrese los números: ";
		cin>>x;
		s=s+x;
		c=c+1;
	}
	cout<<"La suma de los números es de: "<<s;
	getch();
}
