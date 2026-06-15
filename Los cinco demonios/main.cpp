#include <iostream>
#include <ctime>
#include <string>

#include "funciones.h"

using namespace std;

int main()
{
    srand(time(nullptr));

    int opcion;
    string nombre;

    do
    {
        limpiarPantalla();

        opcion = menu();

        if(opcion == 1)
        {
            limpiarPantalla();

            Introduccion();

            NombreJugador(nombre);

            int dados[2];

            dados[0] = rand() % 6 + 1;
            dados[1] = rand() % 6 + 1;

            cout << endl;
            cout << "Dados obtenidos:" << endl;
            cout << endl;

            mostrarDados(dados);

            pausarPantalla();
        }

        if(opcion == 2)
        {
            limpiarPantalla();

            Reglas();

            pausarPantalla();
        }

        if(opcion == 3)
        {
            limpiarPantalla();

            Creditos();

            pausarPantalla();
        }

    }
    while(opcion != 0);

    return 0;
}
