//Comprobar si un número digitado por el usuario es positivo o negativo.

#include<iostream>
#include<stdlib.h>

void Comprobar(float x);
float numero = 0;

int main()
{
	system("CLS");

	std::cout << "Digite un numero: "; std::cin >> numero;
	Comprobar(numero);

	system("pause");
	return 0;
}

void Comprobar(float x)
{
	if (x >= 0)
	{
		std::cout << "El numero es positivo! \n\n";
	}
	else
	{
		std::cout << "El numero es negativo! \n\n";
	}
}