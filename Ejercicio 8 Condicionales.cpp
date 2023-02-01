/*Escribe un programa que lea de la entrada estandar tres numeros. Después debe leer un
cuarto número e indicar si el número coincide con alguno de los introducidos con anterioridad. */

#include<iostream>
#include<stdlib.h>

float num1 = 0, num2 = 0, num3 = 0, num4 = 0;
bool bandera = false;

void Comparar(float a,float b, float c, float d);

int main()
{
	system("CLS");

	std::cout << "Digite un numero: "; std::cin >> num1; 
	std::cout << "Digite otro numero: "; std::cin >> num2; 
	std::cout << "Digite un tercer numero: "; std::cin >> num3;

	std::cout << "Digite un numero a comparar : "; std::cin >> num4; std::cout << "\n";
	Comparar(num1, num2, num3, num4);
	if (bandera == true)
	{
		std::cout << "El numero coincide con uno de los anteriores! \n\n";
	}
	else
	{
		std::cout << "El numero no coincide con uno de los anteriores! \n\n";
	}

	system("pause");
	return 0;
}

void Comparar(float a, float b, float c, float d)
{
	if (a == d)
	{
		bandera = true;
	}
	else if (b == d)
	{
		bandera = true;
	}
	else if (c == d)
	{
		bandera = true;
	}
	else
	{
		bandera = false;
	}
}