#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>
#include <iostream>
#include <array>
#include "Venta.h"

using namespace std;
class Vendedor
{
public:

    /**
     * @brief Constructor Vendedor por defecto que inicializa valores por defecto
     */
    Vendedor(){};

    array<array<string,5>, 4> datosPrueba ={
        array<string,5>{"Vendedor",  "Mes 1",   "Mes 2",   "Mes 3",   "Mes 4"},
        array<string,5>{"Mauricio",  "1950000", "1900000", "1374000", "1208300"},
        array<string,5>{"Oscar",     "5343212", "1032212", "1232399", "1235222"},
        array<string,5>{"Francisco", "5375554", "9567787", "5553221", "1230312"}
    };

    inline void setId(int id){this->id = id;}
    inline int getId(){return this->id;}

    inline void setNombre(string nombre){this->nombre = nombre;}
    inline string getNombre(){return this->nombre;}

    void setVenta(Venta *venta){this->venta = venta;}
    Venta* getVenta(){return this->venta;}


    /**
     * @brief cargarVentas de cada vendedor
     * @param ventas
     * @param size
     */
    inline Venta *cargarVentas(int size){
        int valor=0;
//        Venta venta[size];
        this->venta = new Venta[size];

        for (int i= 0; i < size; i++) {
            cout << "Ingrese el valor de la venta del mes "
                 << i+1 << ": $";
            cin >> valor;

            this->venta[i].setId(i+1);
            this->venta[i].setMes(i+1);
            this->venta[i].setValor(valor);
            this->venta[i].setIdVendedor(getId());
        }

        return this->venta;
    }

    ~Vendedor(){}
private:
    int id;
    string nombre;
    Venta* venta;
};

#endif // VENDEDOR_H
