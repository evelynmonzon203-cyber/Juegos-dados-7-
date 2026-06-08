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
            case 0:
                cout << "Saliendo...";
            break;
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
    }while(opcionMenu != 0);
    return 0;
}

int lanzarDados(){

    return rand() % 6 + 1;;
}

void tirarDados(int dados[2]){
    for(int i = 0; i<2;i++){
        dados[i]= lanzarDados();
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

void jugarPartida(int opcionMenu){
    system("cls");
    int tiradaDados[2];

    if(opcionMenu == 1){
        tirarDados(tiradaDados);
        mostrarDados(tiradaDados);
    }
system("pause >nul");
}


