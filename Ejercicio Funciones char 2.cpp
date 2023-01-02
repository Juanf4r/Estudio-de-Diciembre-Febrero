/* Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el otro real,
convertirlos a sus respectivos valores y por ultimo sumarlos. */

#include<iostream>
#include<stdlib.h>

int main()
{
	int numero1 = 0; float numero2 = 0, total = 0;
	char cad1[] = ""; char cad2[] = "";

	std::cout << "Bienvenido por favor digite un numero entero: "; std::cin >> cad1;
	std::cout << "A continuacion por favor digite un numero con . decimal: "; std::cin >> cad2;

	numero1 = atoi(cad1);
	numero2 = atof(cad2);

	total = numero1 + numero2;

	std::cout << "\nEl total de esos numeros es: " << total << std::endl;

	system("pause");
	return 0;
}