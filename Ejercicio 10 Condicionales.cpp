/*Mostrar los meses del año, pidiéndole al usuario un número entre (1-12),
y mostrar el mes al que corresponde. */

#include<iostream>
#include<stdlib.h>

int num = 0;
void NumMes(int x);

int main()
{
	system("CLS");

	std::cout << "Digite un numero entre el 1 y el 12: "; std::cin >> num;
	std::cout << std::endl; NumMes(num);

	system("pause");
	return 0;
}

void NumMes(int x)
{
	switch (x)
	{
	case 1: std::cout << "Elegiste Enero! \n\n"; break;
	case 2: std::cout << "Elegiste Febrero! \n\n"; break;
	case 3: std::cout << "Elegiste Marzo! \n\n"; break;
	case 4: std::cout << "Elegiste Abril! \n\n"; break;
	case 5: std::cout << "Elegiste Mayo! \n\n"; break;
	case 6: std::cout << "Elegiste Junio! \n\n"; break;
	case 7: std::cout << "Elegiste Julio! \n\n"; break;
	case 8: std::cout << "Elegiste Agosto! \n\n"; break;
	case 9: std::cout << "Elegiste Septiembre! \n\n"; break;
	case 10: std::cout << "Elegiste Octubre! \n\n"; break;
	case 11: std::cout << "Elegiste Noviembre! \n\n"; break;
	case 12: std::cout << "Elegiste Diciembre! \n\n"; break;
	}
}