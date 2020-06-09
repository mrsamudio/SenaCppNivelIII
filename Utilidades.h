#ifndef UTILIDADES_H
#define UTILIDADES_H

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

    /**
     * @brief  Limpiar Consola en windows o linux
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

    /**
     * @brief Da tiempo al usuario para ver el resultado
     * @param seg
     */
    void pausa(int seg)
    {
        this_thread::sleep_for(chrono::seconds(seg));
    }

};

#endif // UTILIDADES_H
