/* Escriba un programa que devuelva la parte fraccionaria de cualquier número introducido por el usuario.
Por ejemplo, si se introduce el número 256.879, debería desplegar el número 0.879. */

#include<iostream>
#include<stdlib.h>

void pedirDatos();
void ptfracc();

char numero[20];

int main()
{
	system("CLS");
	pedirDatos();
	


	system("pause");
	return 0;
}

void pedirDatos()
{
	std::cout << "Digite un numero con punto decimal: "; std::cin >> numero;
}

