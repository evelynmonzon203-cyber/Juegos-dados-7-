#include <iostream>
#include <ctime>
#include "funciones.h"

using namespace std;

int main()
{
    srand(time(nullptr));

    int opcion;

    opcion = menu();

    if(opcion == 1)
    {
        int dados[2];

        dados[0] = rand() % 6 + 1;
        dados[1] = rand() % 6 + 1;

        mostrarDados(dados);
    }

    return 0;
}
