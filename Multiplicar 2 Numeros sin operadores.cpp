//Multiplicar 2 numeros sin operadores

#include<iostream>
#include<stdlib.h>

int main()
{
	system("CLS");
	int a = 0, b = 0, d = 0;

	std::cout << "Digite el primer numero a multiplicar: "; std::cin >> a;
	std::cout << "Digite el segundo numero a multiplicar: "; std::cin >> b;

	for (int i = 0; i < a; i++)
	{
		d = d + b;
	}

	std::cout << "El resultado es: " << d;

	std::cout << "\n\n";

	system("pause");
	return 0;
}