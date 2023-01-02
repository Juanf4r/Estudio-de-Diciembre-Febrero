//Ejercicio 7 del Vídeo de Programacion ATS Lección 47

#include<iostream>
#include<string.h>

int main()
{
	system("CLS");

	char nombre[30] = "";

	std::cout << "INGRESE SU NOMBRE EN MAYUSCULAS: "; std::cin >> nombre;

	if (nombre[0] == 'A')
	{
		_strlwr_s(nombre);
		std::cout << "\nBIENVENIDO " << nombre << " AL PROGRAMA\n";
	}
	else
	{
		std::cout << "\nBIENVENIDO " << nombre << " AL PROGRAMA\n";
	}

	system("pause");
	return 0;
}