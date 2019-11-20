/* Reptil.h
 */

#ifndef REPTIL_H
#define REPTIL_H

#include "Animal.h"

class Reptil : public Animal
{
public:
    /** Constructor del reptil
     * @brief Reptil
     * @param nombre
     * @param sangre
     * @param color
     * @param tipoComida
     * @param habito
     * @param dientes
     */
    inline Reptil(string nombre, bool sangre, string color,char tipoComida, char habito, int dientes){
        setNombre(nombre);
        setSangre(sangre);
        setColorEscamas(color);
        setTipoComida(tipoComida);
        setTipoHabito(habito);
        setDientes(dientes);
    }
    inline ~Reptil(){}

    inline int getDientes(){return this->dientes;}
    inline void setDientes(int dientes){this->dientes = dientes;}

    inline string getColorEscamas(){return this->colorEscamas;}
    inline void setColorEscamas(string color){this->colorEscamas = color;}

private:
    int dientes = 0;
    string colorEscamas = "";
};



#endif // REPTIL_H
