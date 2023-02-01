/*Realice un programa que lea de la entrada estandar numeros hasta que se introduzca un cero. En ese
momento el programa debe terminar y mostrar en la salida estandar el numero de valores mayores
que cero leidos. */

#include<iostream>
#include<stdlib.h>

int num,conteo = 0;

int main()
{
	system("CLS");

	std::cout << "---------------------INTRODUZCA TITULO---------------------\n\n";
	do 
	{
		std::cout << "Digite un numero: "; std::cin >> num;
		if (num > 0)
		{
			conteo++;
		}
	} while (num != 0);

	std::cout << "El total de numeros mayores que 0 es: " << conteo<<"\n\n";
			
	system("pause");
	return 0;
}