//El juego del Ahorcado en C++

#include<iostream>
#include<locale.h>
#include<windows.h>

void SlowPrint(std::string text, float speed = .04)
{
	for (int i = 0; i < text.size(); i++)
	{
		std::cout << text[i]; Sleep(777 * speed);
	}   std::cout << "\n";
}

struct Palabras
{
	char palabra[20];
}
palabra1 = { "Playstation" },
palabra2 = { "Consola" },
palabra3 = { "VideoJuego" };

int main()
{
	system("CLS");
	setlocale(LC_ALL,"");

	char band = 'F';
	char letras_error[10] = {};
	char letra;

	std::cout << "Bienvenido al Juego del Ahorcado :)\n";
	std::cout << "Si quieres salvar a esta persona deberas adivinar la palabra del juego\n";
	std::cout << "Por cada intento que hagas estara mas cerca de morir\n";
	std::cout << "Así que si te equivocas mucho pierdes :))\n";
	std::cout << "QUE COMIENCE EL JUEGO\n\n";

	std::cout << "------------------------------------------------\n";
	std::cout << "Letras escritas anteriormente: " << letras_error << "\n";
	std::cout << "                                                \n";
	std::cout << "                                                \n";
	std::cout << "                                                \n";
	std::cout << "                                                \n";
	std::cout << "                                                \n";
	std::cout << "                                                \n";
	std::cout << "                                                \n";
	std::cout << "                                                \n";
	std::cout << "                                                \n";
	std::cout << "Escribe una letra: "; std::cin >> letra;


	system("pause");
	return 0;
}