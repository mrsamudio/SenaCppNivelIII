/* main.cpp
 * Se requiere un programa que permita agregar objetos de tipo "animal" con sus respectivas
 * propiedades y métodos para cambiarlas, mínimo 2 animales así:
 *      Mamíferos
 *      Reptiles
 *      Aves
 */

#include <iostream>
#include <string>

using namespace std;

#include "inicio.h"

int main()
{
    inicio h;
    cout << "Bienvenido al programa \"Agregar objetos de tipo animal\" " << endl;
    h.pregunta();
    h.menu();
    h.~inicio();

    return 0;
}