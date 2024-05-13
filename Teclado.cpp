// Teclado.cpp
// Definición de las funciones miembro de la clase Teclado (el teclado del ATM).
#include <iostream>
using std::cin;

#include "Teclado.h" // Definición de la clase Teclado

// devuelve un valor entero introducido por el usuario
int Teclado::obtenerEntrada() const
{
int entrada; // variable para almacenar la entrada
cin >> entrada; // asumimos que el usuario introduce un entero
return entrada; // devuelve el valor introducido por el usuario
} // fin de la función function obtenerEntrada