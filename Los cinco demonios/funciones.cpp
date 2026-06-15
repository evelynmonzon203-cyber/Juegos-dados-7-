#include <iostream>
#include <string>
#include <cstdlib>

#include "funciones.h"

using namespace std;

int menu()
{
    int opcion;

    cout << "=================================" << endl;
    cout << "      LOS CINCO DEMONIOS" << endl;
    cout << "=================================" << endl;
    cout << "1 - JUGAR" << endl;
    cout << "2 - REGLAS" << endl;
    cout << "3 - CREDITOS" << endl;
    cout << "0 - SALIR" << endl;
    cout << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    return opcion;
}

void mostrarDados(int dados[2])
{
    for(int i = 0; i < 2; i++)
    {
        switch(dados[i])
        {
        case 1:
            cout << "+-------+\n"
                 << "|       |\n"
                 << "|   X   |\n"
                 << "|       |\n"
                 << "+-------+\n";
            break;

        case 2:
            cout << "+-------+\n"
                 << "| X     |\n"
                 << "|       |\n"
                 << "|     X |\n"
                 << "+-------+\n";
            break;

        case 3:
            cout << "+-------+\n"
                 << "| X     |\n"
                 << "|   X   |\n"
                 << "|     X |\n"
                 << "+-------+\n";
            break;

        case 4:
            cout << "+-------+\n"
                 << "| X   X |\n"
                 << "|       |\n"
                 << "| X   X |\n"
                 << "+-------+\n";
            break;

        case 5:
            cout << "+-------+\n"
                 << "| X   X |\n"
                 << "|   X   |\n"
                 << "| X   X |\n"
                 << "+-------+\n";
            break;

        case 6:
            cout << "+-------+\n"
                 << "| X   X |\n"
                 << "| X   X |\n"
                 << "| X   X |\n"
                 << "+-------+\n";
            break;
        }

        cout << endl;
    }
}

void Introduccion()
{
    cout << endl;
    cout << "=================================" << endl;
    cout << "      LOS CINCO DEMONIOS" << endl;
    cout << "=================================" << endl;
    cout << endl;
    cout << "El Necronomicon fue abierto." << endl;
    cout << "Cinco demonios escaparon." << endl;
    cout << "Tu mision es sellarlos." << endl;
    cout << "Dispones de 15 invocaciones." << endl;
    cout << endl;
}

void NombreJugador(string &nombre)
{
    cout << "Ingrese el nombre del descendiente: ";
    cin >> nombre;
}

void Reglas()
{
    cout << endl;
    cout << "========== REGLAS ==========" << endl;
    cout << endl;

    cout << "Dispones de 15 invocaciones." << endl;
    cout << "Debes sellar los 5 demonios." << endl;
    cout << endl;

    cout << "Baramos: numeros iguales." << endl;
    cout << "Dracolord: suma 7." << endl;
    cout << "Darck: numeros consecutivos." << endl;
    cout << "WhiteKing: suma mayor o igual a 10." << endl;
    cout << "Lazamanus: doble 5 o doble 6." << endl;
    cout << endl;
}
void Creditos()
{
    cout << endl;
    cout << "========== CREDITOS ==========" << endl;
    cout << endl;

    cout << "Integrantes del grupo 7:" << endl;
    cout << endl;

    cout << "- Brahian Benitez Brizuela" << endl;
    cout << "- Luis Bernardo Perrone" << endl;
    cout << "- Evelyn Monzon" << endl;
}

void Victoria(string nombre, int invocacionesUsadas)
{
    cout << endl;
    cout << "========== VICTORIA ==========" << endl;
    cout << endl;

    cout << nombre << " ha sellado los cinco demonios." << endl;
    cout << "Invocaciones utilizadas: ";
    cout << invocacionesUsadas << endl;
}

void Derrota(string nombre)
{
    cout << endl;
    cout << "========== DERROTA ==========" << endl;
    cout << endl;

    cout << nombre << " no logro sellar los cinco demonios." << endl;
}

void pausarPantalla()
{
    system("pause");
}

void limpiarPantalla()
{
    system("cls");
}
