/* Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y
despliegue el resultado. La función deberá ser capaz de elevar al cuadrado números flotantes. */

#include<iostream>
#include<stdlib.h>
#include<Windows.h>

void PedirDatos();
void al_cuadrado(float x);

float num1;

int main()
{
	system("CLS");

	std::cout << "---------NUMERO AL CUADRADO---------\n\n";

	PedirDatos();
	al_cuadrado(num1);
	
	system("pause");
	return 0;
}

void PedirDatos()
{
	std::cout << "Digite un numero con punto decimal: "; std::cin >> num1;
}

void al_cuadrado(float x)
{
	float cuadrado = (num1 * num1);
	std::cout << "El numero al cuadrado es: " << cuadrado << "\n\n";
}