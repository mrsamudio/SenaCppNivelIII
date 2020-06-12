#include "NumeroImaginario.h"
#include <fstream>
#include <iostream>

using namespace std;

int main()
{

    string nombre = "Actividad4.log";
    ofstream salidaArchivo (nombre);


    NumeroImaginario uno(3.5,4.2), dos(10.9,3.7), tres;

    salidaArchivo << "Suma de números imaginarios" << endl;
    tres= uno + dos;
    cout << tres.resultado();
    // registro de operaciones en un archivo de texto
    salidaArchivo << tres.resultado() << endl;

    salidaArchivo << "Resta de números imaginarios" << endl;
    tres= uno - dos;
    cout << tres.resultado();
    salidaArchivo << tres.resultado() << endl;

    salidaArchivo << "Multiplicación de números imaginarios" << endl;
    tres= uno * dos;
    cout << tres.resultado();
    salidaArchivo << tres.resultado() << endl;

    salidaArchivo << "División de números imaginarios" << endl;
    tres= uno / dos;
    cout << tres.resultado();
    salidaArchivo << tres.resultado() << endl;

    salidaArchivo.close();


    return 0;
}
