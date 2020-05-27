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

/** Método principal de ejecución del programa
 * @brief main
 * @return
 */
int main()
{
    inicio h;
    cout << "Bienvenido al programa \"Agregar objetos de tipo animal\" " << endl;
    h.pregunta();
    h.menu();
    h.~inicio();

    cout << "Digite enter para continuar";
    getchar();

    return 0;
}
