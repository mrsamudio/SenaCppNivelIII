/* Mamifero.h
 */

#ifndef MAMIFERO_H
#define MAMIFERO_H

#include "Animal.h"

class Mamifero : public Animal
{
public:

    const vector<string> EXTREMIDADES ={"Plantígradas", "Digitígradas", "Unguladas"};

    inline Mamifero(string nombre, bool sangre, string color, char tipoComida, char habito, char patas){
        setNombre(nombre);
        setSangre(sangre);
        setColorPelo(color);
        setTipoComida(tipoComida);
        setTipoHabito(habito);
        setExtremidades(patas);
    }
    inline ~Mamifero(){cout << "Objeto destruido" << endl;}

    //Métodos get y set
    inline void setColorPelo(string color){this->colorPelo = color;}
    inline string getColorPelo(){return this->colorPelo;}

    inline void setExtremidades(char patas){
        switch (patas) {
        case '0':
            this->extremidades = EXTREMIDADES[0];
            break;
        case '1':
            this->extremidades = EXTREMIDADES[1];
            break;
        case '2':
            this->extremidades = EXTREMIDADES[2];
            break;
        default:
            break;
        }
        this->extremidades = patas;
    }
    string getExtremidades(){return this->extremidades;}




private:
    string colorPelo = "";
    string extremidades = "";
};



#endif // MAMIFERO_H
