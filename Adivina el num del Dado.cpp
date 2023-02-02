/*JUEGO DE ADIVINAR EL DADO*/

#include<iostream>
#include<stdlib.h>
#include<locale.h>
#include<Windows.h>


int main()
{
	system("CLS");
	setlocale(LC_ALL, "spanish");
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	srand(time(0));

	int num = 0, num_random;
	std::string inicio = "no";

	std::cout << "----------------ADIVINA EL NUMERO DEL DADO!----------------\n\n"; Sleep(1000);
	std::cout << "El juego consiste en escribir un numero del 1 al 6\n\n"; Sleep(1500);
	std::cout << "Adivina el numero del dado!!\n"; Sleep(1000);

	do {
		std::cout << "\nEscribe un numero del 1 al 6: "; std::cin >> num;

		std::cout << "\nLANZAMOS EL DADO!"; Sleep(1000); std::cout << "\nY."; Sleep(300); std::cout << "."; Sleep(300); std::cout << "."; Sleep(300); std::cout << ".\n"; Sleep(300);

		num_random = rand() % 6 + 1;

		std::cout << "\nEl numero que toco fue: " << num_random << "!\n"; Sleep(1000);

		if (num == num_random)
		{
			std::cout << "\nFELICIDADES ADIVINASTE EL NUMERO!\n\n";
		}
		else if (num != num_random)
		{
			std::cout << "\nMala suerte! :c \n\n";
		}

		std::cout << "Quieres volver a jugar? \n"; std::cout << "Escriba si o no para continuar: \n\n"; std::cin >> inicio;

	} while (inicio == "Si" || inicio == "si");

	std::cout << std::endl;

	system("pause");
	return 0;
}