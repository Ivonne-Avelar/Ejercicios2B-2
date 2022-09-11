#include <iostream>
using namespace std;

int main()
{
	int opcion = 0;
	do
	{
		cout << "Ingrese 1 para mostrar el mensaje\n";
		cout << "Ingrese 2 para realizar algo más\n";
		cout << "Ingrese 0 para salir\n";
		
		cout << "Ingrese una opción para ejecutar\n";
		cin >> opcion;
	}
	while(opcion != 0);
	system("PAUSE");
	return 0;
}