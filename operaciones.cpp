#include "Operaciones.h"
Operaciones::Operaciones(int entero, double real, char caracter)
{
    entero = 2;
    real = 3.5;
    caracter = '4';
}


void Operaciones::Suma(int valor1, int valor2){
    cout << "El resultado es: " << valor1 + valor2 << endl;
}
void Operaciones::Suma(int valor1, int valor2, int valor3){
    cout << "El resultado es: " << valor1 + valor2 + valor3 << endl;
}
void Operaciones::Suma(double valor1, double valor2){
    cout << "El resultado es: " << valor1 + valor2 << endl;
}
void Operaciones::Suma(double valor1, double valor2, double valor3){
    cout << "El resultado es: " << valor1 + valor2 + valor3 << endl;
}
void Operaciones::Suma(char valor1, char valor2){
    cout << "El resultado es: " << valor1 + valor2 << endl;

}
void Operaciones::Suma(char valor1, char valor2, char valor3){
    cout << "El resultado es: " << valor1 + valor2 + valor3 << endl;

}
