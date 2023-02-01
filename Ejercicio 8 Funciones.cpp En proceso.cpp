/* Escriba una funcion nombrada cambio() que tenga un parametro en numero entero y 6 parametros de referencia
en numero entero nombrados cien, cincuenta, veinte, diez, cinco y uno, respectivamente. La funcion tiene 
que considerar el valor entero transmitido como una cantidad en dolares y convertir el valor en el
numero menor de billetes equivalentes.*/

#include<iostream>
#include<stdlib.h>

int cambio(int&, int&, int&, int&, int&, int&);
int dinero = 0, cien, cincuenta, veinte, diez, cinco, uno;

int main()
{
	system("CLS");

	std::cout << "---------------CAJERO EN DOLARES---------------\n\n";

	std::cout << "Digite el dinero a sacar: "; std::cin >> dinero;
	cambio(cien, cincuenta, veinte, diez, cinco, uno);


	system("pause");
	return 0;
}

int cambio(int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno)
{
	for (int i = 0; i < dinero; i++)
	{

	}
}