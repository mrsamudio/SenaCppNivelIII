#ifndef UTILIDADES_H
#define UTILIDADES_H

#endif // UTILIDADES_H

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

class Utilidades
{
public:
    /** Constructor por defecto
     * @brief Utilidades
     */
    Utilidades(){}

    /** Limpiar Consola en windows o linux
     * @brief limpiarConsola
     */
    inline void limpiarConsola()
    {
    #ifdef _WIN32
        system("cls");
    #elif __linux__
        system("clear");
    #else
        cout <<"Sistema operativo no reconocido";
    #endif
    }


    /** Da tiempo al usuario para ver el resultado
     * @brief pausa
     * @param seg
     */
    void pausa(int seg)
    {
        this_thread::sleep_for(chrono::seconds(seg));
    }

};
