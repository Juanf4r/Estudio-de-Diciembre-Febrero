//Ordenamiento por Selección

#include<iostream>
#include<stdlib.h>

int main()
{
	system("CLS");

	int numeros[5] = {}; int i, j, aux, min = 0;

	std::cout << "BIENVENIDO, POR FAVOR INTRODUZCA 5 NUMEROS ENTEROS\n";
	std::cout << "Escriba el primer numero: "; std::cin >> numeros[0];
	std::cout << "Escriba el segundo numero: "; std::cin >> numeros[1];
	std::cout << "Escriba el tercer numero: "; std::cin >> numeros[2];
	std::cout << "Escriba el cuarto numero: "; std::cin >> numeros[3];
	std::cout << "Escriba el quinto numero: "; std::cin >> numeros[4];

	//Algoritmo Ordenamiento por Selección

	for (i = 0; i < 5; i++)
	{
		min = i;

		for (j = i + 1; j < 5; j++)
		{
			if (numeros[j] < numeros[min])
			{
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}

	std::cout << "\nSus numeros ordenados son: ";
	for (i = 0; i < 5; i++)
	{
		std::cout << numeros[i] << " ";
	}

	std::cout << std::endl;

	system("pause");
	return 0;
}