//Ordenamiento de numeros

#include<iostream>

int main()
{
	system("CLS");

	int numeros[5] = {};
	int i = 0, j = 0, aux = 0;

	std::cout << "BIENVENIDO, DIGITE 5 NUMEROS ALEATORIOS\n";
	std::cout << "Digite el primer numero: "; std::cin >> numeros[0];
	std::cout << "Digite el segundo numero: "; std::cin >> numeros[1];
	std::cout << "Digite el tercer numero: "; std::cin >> numeros[2];
	std::cout << "Digite el cuarto numero: "; std::cin >> numeros[3];
	std::cout << "Digite el quinto numero: "; std::cin >> numeros[4];

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (numeros[j] > numeros[j + 1])
			{
				aux = numeros[j];
				numeros[j] = numeros[j + 1];
				numeros[j + 1] = aux;
			}
		}
	}

	std::cout << "EL ORDEN DE LOS NUMEROS VA ASI: ";
	for (i = 0; i < 5; i++)
	{
		std::cout << numeros[i] << " ";
	}

	system("pause");
	return 0;
}