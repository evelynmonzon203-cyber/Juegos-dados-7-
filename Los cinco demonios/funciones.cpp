#include <iostream>
#include "funciones.h"

using namespace std;

void mostrarMenu()
{

    cout << "=================================" << endl;
    cout << "      LOS CINCO DEMONIOS" << endl;
    cout << "=================================" << endl;
    cout << "1 - JUGAR" << endl;
    cout << "2 - ESTADISTICAS" << endl;
    cout << "3 - CREDITOS" << endl;
    cout << "0 - SALIR" << endl;
    cout << endl;

}

int Menu(){
    srand(time(0));
    int opcionMenu;

    do{
        system("cls");

        mostrarMenu();
        cout << "Ingrese una opcion: ";
        cin >> opcionMenu;

        switch(opcionMenu){
            case 1:
                jugarPartida(opcionMenu);
            break;
            case 2:
                cout << "estadisticas();";
            break;
            case 3:
                cout << "creditos();";
            break;
            case 4:
            default:
                cout << "Opcion incorrecta";

    }
    system("pause");
    }while(opcionMenu != 3);
    return 0;
}

void jugarPartida(int opcionMenu){

    if(opcionMenu == 1){
        int dados[2];

        dados[0] = rand() % 6 + 1;
        dados[1] = rand() % 6 + 1;

        mostrarDados(dados);
    }

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

