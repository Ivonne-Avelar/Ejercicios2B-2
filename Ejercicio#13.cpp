#include <iostream>
using namespace std;

int numero(int a){
	if(a < 0){
		return -1;
	}
	else if(a > 0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int a,b;
	cout<<"\n Ingrese un número: \n \n";
	cin>>a;
	cout<< "\n \n \n \t" <<numero(a);
	
	return 0;
}