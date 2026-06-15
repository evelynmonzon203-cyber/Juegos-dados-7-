#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

int menu();

void mostrarDados(int dados[2]);

void Introduccion();
void NombreJugador(string &nombre);

void Reglas();
void Creditos();

void Victoria(string nombre, int invocacionesUsadas);
void Derrota(string nombre);

void pausarPantalla();
void limpiarPantalla();

#endif
