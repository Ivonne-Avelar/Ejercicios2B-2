#include <iostream>
using namespace std;

int main(){
	int num[100];
	
	for(int i = 0; i < 100; i++){
		if(i % 3 == 0){ num[i] = i; 	}
	}
	for(int i = 0; i < 100; i++){
		if(i % 3 == 0) { cout << num[i] << endl; 	}
	}
	return 0;
}
