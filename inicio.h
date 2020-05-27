/* inicio.h
 *
 */

#ifndef INICIO_H
#define INICIO_H

#include <chrono>
#include <thread>
#include <iterator>
#include <iostream>
#include <string>
#include "Mamifero.h"
#include "Ave.h"
#include "Reptil.h"

using namespace std;

class inicio
{
public:
    inicio(){}
    ~inicio(){}

    // Métodos utilitarios
    void limpiarConsola();
    void pausa(int seg);
    void pregunta();


    // método menú
    void menu();
    void cambiarProp();

    // Creación de objetos animales


    //Métodos get y set para los ingresos de animales

    /** Establece los ingresos mínimos de animales y ajusta los vectores
     * @brief setMin
     * @param min
     */
    inline void setMin(unsigned int min){
        this->min = min;
        this->m.resize(this->min);
        this->a.resize(this->min);
        this->r.resize(this->min);
    }
    inline  unsigned int getMin(){return this->min;}

//    inline void setNumAnimales(unsigned int num){
//        this->m.resize(num);
//        this->a.resize(num);
//        this->r.resize(num);
//    }

    //friend ostream& operator<<(ostream& out, const vector<Mamifero> &p);

private:
    unsigned int min = 2; // min determina el minimo de objetos a llamar por clase.

    string nombre ="";
    bool sangre;
    string color = "";
    char tipoComida, habito, patas, ala, pluma;
    int dientes;

    vector<Mamifero*> m ;
    vector<Ave*> a ;
    vector<Reptil*> r;
};

//ostream& operator<<(ostream& out, const vector<Mamifero> &p);

#endif // INICIO_H
