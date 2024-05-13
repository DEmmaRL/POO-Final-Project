// Teclado.cpp
// Definición de las funciones miembro de la clase Teclado (el teclado del ATM).
#include <iostream>
#include <conio.h>
using namespace std;

#include "Teclado.h" // Definición de la clase Teclado

// devuelve un valor entero introducido por el usuario
int Teclado::obtenerEntrada() const
{
int entrada; // variable para almacenar la entrada
cin >> entrada; // asumimos que el usuario introduce un entero
return entrada; // devuelve el valor introducido por el usuario
} // fin de la función function obtenerEntrada

int Teclado::obtenerNIP() const
{
    int entrada; // variable para almacenar la entrada
    char caracter; // variable para almacenar cada caracter de la entrada

    // Se utiliza getch() para obtener cada caracter sin imprimirlo en pantalla
    while ((caracter = getch()) != '\r') // '\r' indica la tecla Enter
    {
        // Solo se aceptan caracteres numéricos
        if (isdigit(caracter)){
            std::cout<<'*';
            entrada = entrada * 10 + (caracter - '0');
        }
    }

    std::cout << std::endl; // Se imprime una nueva línea al final
    return entrada; // devuelve el valor introducido por el usuario
} // fin de la función obtenerEntrada