/*JUEGO DE ADIVINAR EL DADO*/

#include<iostream>
#include<stdlib.h>
#include<Windows.h>

int main()
{
	system("CLS");
	setlocale(LC_ALL, "");

	int num = 0;

	std::cout << "----------------ADIVINA EL NUMERO DEL DADO!----------------\n\n";

	std::cout << "El juego consiste en escribir un numero del 1 al 6 y adivinar el numero del dado\n";

	std::cout << "Escribe un numero del 1 al 6: "; std::cin >> num;

	std::cout << "¡LANZAMOS EL DADO!";



	system("pause");
	return 0;
}