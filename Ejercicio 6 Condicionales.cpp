/*Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar
si el caracter es una voca minuscula, es una vocal mayuscula o no es una vocal. */

#include<iostream>
#include<stdlib.h>

char caracter;
void comprobar(char x);

int main()
{
	system("CLS");

	std::cout << "Introduzca un caracter: "; std::cin >> caracter;
	comprobar(caracter);

	system("pause");
	return 0;
}

void comprobar(char x)
{
	switch (x)
	{
	case 'a': 
	case 'e':
	case 'i':
	case 'o':
	case 'u': std::cout << "Es vocal minuscula\n\n"; break;
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U': std::cout << "Es vocal Mayuscula\n\n"; break;
	default: std::cout << "No es vocal\n\n"; break;
	}
}