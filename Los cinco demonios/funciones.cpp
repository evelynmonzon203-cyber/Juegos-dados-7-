#include <iostream>
#include "funciones.h"

using namespace std;

int menu()
{
    int opcion;

    cout << "=================================" << endl;
    cout << "      LOS CINCO DEMONIOS" << endl;
    cout << "=================================" << endl;
    cout << "1 - JUGAR" << endl;
    cout << "2 - ESTADISTICAS" << endl;
    cout << "3 - CREDITOS" << endl;
    cout << "0 - SALIR" << endl;
    cout << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    return opcion;
}

void mostrarDados(int dados[2])
{
    for (int i = 0; i < 2; i++)
    {
        switch (dados[i])
        {
        case 1:
            cout << "+-------+\n"
                    "|       |\n"
                    "|   X   |\n"
                    "|       |\n"
                    "+-------+\n";
            break;

        case 2:
            cout << "+-------+\n"
                    "| X     |\n"
                    "|       |\n"
                    "|     X |\n"
                    "+-------+\n";
            break;

        case 3:
            cout << "+-------+\n"
                    "| X     |\n"
                    "|   X   |\n"
                    "|     X |\n"
                    "+-------+\n";
            break;

        case 4:
            cout << "+-------+\n"
                    "| X   X |\n"
                    "|       |\n"
                    "| X   X |\n"
                    "+-------+\n";
            break;

        case 5:
            cout << "+-------+\n"
                    "| X   X |\n"
                    "|   X   |\n"
                    "| X   X |\n"
                    "+-------+\n";
            break;

        case 6:
            cout << "+-------+\n"
                    "| X   X |\n"
                    "| X   X |\n"
                    "| X   X |\n"
                    "+-------+\n";
            break;
        }

        cout << endl;
    }
}

