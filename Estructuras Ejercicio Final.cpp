//Estructuras Ejercicio Final

#include<iostream>
#include<stdlib.h>

struct Promedio
{
	float nota1;
	float nota2;
	float nota3;
	float promedio_final;
};

struct Alumno
{
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio prom;
}alumno[50];

int AlumnosG;
float SumaNotas(float a, float b, float c);
float aux, promedio;


int main()
{
	system("CLS");

	std::cout << "---------------------BASE DE DATOS DE LA ESCUELA---------------------\n\n";
	std::cout << "Cuantos alumnos quiere generar: "; std::cin >> AlumnosG;

	for (int i = 0; i < AlumnosG; i++)
	{
		std::cout << "Nombre del "<<i+1 <<". alumno: "; std::cin >> alumno[i].nombre;
		std::cout << "Ecriba el sexo del " << i + 1 << ". alumno: "; std::cin >> alumno[i].sexo;
		std::cout << "Escriba la edad del " << i + 1 << ". alumno: "; std::cin >> alumno[i].edad;

		std::cout << "\nDigite la Primera Nota del " << i + 1 << ". alumno: "; std::cin >> alumno[i].prom.nota1;
		std::cout << "Digite la Segunda Nota del " << i + 1 << ". alumno: "; std::cin >> alumno[i].prom.nota2;
		std::cout << "Digite la Tercera Nota del " << i + 1 << ". alumno: "; std::cin >> alumno[i].prom.nota3;

		SumaNotas(alumno[i].prom.nota1, alumno[i].prom.nota2, alumno[i].prom.nota3);

		promedio = alumno[i].prom.promedio_final;
		
		std::cout << "El promedio del Alumno es: " << alumno[i].prom.promedio_final << "\n";

		std::cout<<std::endl;

	}

	for (int i = 0; i < 1; i++) 
	{
	std::cout << "El Alumno con mayor promedio es: " << alumno[i].nombre;
	}

	system("pause");
	return 0;
}

float SumaNotas(float a, float b, float c)
{
	promedio = (a + b + c) / 3;
	return promedio;
}