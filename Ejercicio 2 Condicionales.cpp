//Escriba un programa que lea tres numeros y determine cual de ellos es el mayor

#include<iostream>
#include<stdlib.h>

float NumeroMayor(float x, float y, float z);
float num1, num2, num3, mayor;

int main()
{
	system("CLS");

	std::cout << "Digite un numero: "; std::cin >> num1;
	std::cout << "Digite otro numero: "; std::cin >> num2;
	std::cout << "Digite un ultimo numero: "; std::cin >> num3;

	NumeroMayor(num1, num2, num3);

	std::cout << "El numero mayor es: " << mayor << "\n\n";

	system("pause");
	return 0;
}

float NumeroMayor(float num1, float num2, float num3)
{
	if (num1 > num2)
	{
		mayor = num1;
	}
	else if (num2 > num1)
	{
		mayor = num2;
	}

	if (mayor > num3)
	{
		//No pasa nada
	}
	else if (mayor < num3)
	{
		mayor = num3;
	}

	return mayor;
}