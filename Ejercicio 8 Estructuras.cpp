/* Ejercicio 8 Estructuras
Define una estructura que sirva para representar a una persona.La estructura debe contener dos campos:
el nombre de la persona y un valor de tipo lógico que indica si la persona tiene algún tipo de discapacidad.
Realice un programa que dado un vector de personas rellene dos nuevos vectores: uno que contenga las personas
que no tienen ninguna discapacidad y otro que contenga las personas con discapacidad. */

#include <iostream>
#include<stdlib.h>

struct persona
{
    char nombre[30];
    char discapacidad[15];
}per[50];

int main()
{
    system("CLS");
    int n_personas = 0,caso = 0;
    int si_o_no = 0;
    char n_disca[] = "Sin Discapacidad";
    char dis1[] = "Discapacidad Fisica", dis2[] = "Discapacidad Organica", 
    dis3[] = "Discapacidad Mental", dis4[] = "Discapacidad Visual", dis5[] = "Discapacidad Auditiva";

    std::cout << "Digite la cantidad de personas: "; std::cin >> n_personas;

    for (int i = 0; i < n_personas; i++)
    {
        std::cout << "Nombre: "; std::cin >> per[i].nombre;
        std::cout << "Cuenta con alguna discapacidad? 0 para si o 1 para no: "; std::cin >> si_o_no;

        fflush(stdin);

        if (si_o_no == 1)
        {
            strcpy_s(per[i].discapacidad, n_disca);
        }
        else if (si_o_no == 0)
        {
            std::cout << "1.-Discapacidad Fisica\n";
            std::cout << "2.-Discapacidad Organica\n";
            std::cout << "3.-Discapacidad Mental\n";
            std::cout << "4.-Discapacidad Visual\n";
            std::cout << "5.-Discapacidad Auditiva\n";
            std::cout << "Seleccione una de las sig: "; std::cin >> caso;
            
            switch (caso)
            {
            case 1: strcpy_s(per[i].discapacidad, dis1);
            break;

            case 2: strcpy_s(per[i].discapacidad, dis2);
            break;

            case 3: strcpy_s(per[i].discapacidad, dis3);
            break;

            case 4: strcpy_s(per[i].discapacidad, dis4);
            break;

            case 5: strcpy_s(per[i].discapacidad, dis5);
            break;
            }
        }      
    }

    for (int i = 0; i < n_personas; i++)
    {
        std::cout << "--------------DATOS--------------\n\n";
        std::cout << "Nombre: " << per[i].nombre <<"\n";
        std::cout << "Discapacidad: " << per[i].discapacidad << "\n";
    }

    system("pause");
    return 0;
}