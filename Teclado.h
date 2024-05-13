// Teclado.h
// Definición de la clase Teclado. Representa el teclado del ATM.
#ifndef TECLADO_H
#define TECLADO_H

class Teclado
{
public:
int obtenerEntrada() const; // devuelve un valor entero introducido por el usuario
int obtenerNIP() const; // devuelve un valor entero introducido por el usuario, enmascara con getch la entrada
}; // fin de la clase Teclado

#endif // TECLADO_H