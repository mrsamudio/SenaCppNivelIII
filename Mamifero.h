/* Mamifero.h
 */

#ifndef MAMIFERO_H
#define MAMIFERO_H

#include "Animal.h"

class Mamifero : public Animal
{
public:

//
    const vector<string> EXTREMIDADES ={"Plantígradas", "Digitígradas", "Unguladas"};

    /** Constructor del Mamifero
     * @brief Mamifero
     * @param nombre
     * @param sangre
     * @param color
     * @param tipoComida
     * @param habito
     * @param patas
     */
    inline Mamifero(string nombre, bool sangre, string color, char tipoComida, char habito, char patas){
        setNombre(nombre);
        setSangre(sangre);
        setColorPelo(color);
        setTipoComida(tipoComida);
        setTipoHabito(habito);
        setExtremidades(patas);
    }
    inline ~Mamifero(){cout << "Objeto Mamifero destruido" << endl;}

    //Métodos get y set
    inline void setColorPelo(string color){this->colorPelo = color;}
    inline string getColorPelo(){return this->colorPelo;}

    /** Qué tipo de extremidad tiene?
     * @brief setExtremidades
     * @param patas
     */
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
            this->extremidades = "Indeterminado";
            break;
        }
    }

    string getExtremidades(){return this->extremidades;}




private:
    string colorPelo = "";
    string extremidades = "";
};



#endif // MAMIFERO_H
