//Hacer un menú que considere las siguientes opciones:
//Caso 1: Cubo de un numero
//Caso 2: Numero par o impar
//Caso 3: Salir

#include<iostream>
#include<stdlib.h>

int opc = 0,num,resultado;
bool bandera = true;
void Elegir(int x);

int main()
{
	system("CLS");

	std::cout << "--------------------MENU MATEMATICO--------------------\n\n";
	std::cout << "Selecciona una opcion: \n";
	std::cout << "1. Cubo de un numero\n";
	std::cout << "2. Numero par o impar\n";
	std::cout << "3. Salir\n\n";
	std::cin >> opc;
	Elegir(opc);

	system("pause");
	return 0;
}

void Elegir(int x)
{
	switch (x)
	{
	case 1: std::cout << "Digite el numero a multiplicar: "; std::cin >> num;
			resultado = (num * num * num);
			std::cout << "El resultado es: " << resultado << "\n"; break;

	case 2: std::cout << "Digite el numero a comprobar: "; std::cin >> num;
		if (num == 0)
		{
			std::cout << "El numero es 0!\n";
		}
		if (num % 2 == 0)
		{
			std::cout << "El numero es par!\n";
		}
		else
		{
			std::cout << "El numero es impar!\n";
		}	break;
	case 3: break;
	}
}