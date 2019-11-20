/* Ave.h
 */

#ifndef AVE_H
#define AVE_H

#include "Animal.h"

class Ave : public Animal
{
public:
    const vector<string> TIPOALAS = {"Aerodinámica", "Eliptica", "Larga", "Ancha"};
    const vector<string> TIPOPLUMAS = {"Primarias", "Secundarias", "Timoneras", "Coberteras", "Plumón"};

    inline Ave(string nombre, bool sangre, string color,char tipoComida, char habito, char ala, char pluma){
        setNombre(nombre);
        setSangre(sangre);
        setColorPlumas(color);
        setTipoComida(tipoComida);
        setTipoHabito(habito);
        setAla(ala);
        setPluma(pluma);
    }
    inline ~Ave(){}

    // Métodos get y set
    inline string getColorPlumas(){return this->colorPlumas;}
    inline void setColorPlumas(string color){this->colorPlumas = color;}

    inline string getAla(){return this->ala;}
    inline void setAla(char ala){
        switch (ala) {
        case '0':
            this->ala = TIPOALAS[0];
            break;
        case '1':
            this->ala = TIPOALAS[1];
            break;
        case '2':
            this->ala = TIPOALAS[2];
            break;
        case '3':
            this->ala = TIPOALAS[3];
            break;
        default:
            break;
        }
    }

    inline string getPluma(){return this->pluma;}
    inline void setPluma(char pluma){
        switch (pluma) {
        case '0':
            this->pluma = TIPOPLUMAS[0];
            break;
        case '1':
            this->pluma = TIPOPLUMAS[1];
            break;
        case '2':
            this->pluma = TIPOPLUMAS[2];
            break;
        case '3':
            this->pluma = TIPOPLUMAS[3];
            break;
        case '4':
            this->pluma = TIPOPLUMAS[4];
            break;
        default:
            break;
        }
    }

private:
    string ala ="";
    string pluma="";
    string colorPlumas="";
};

#endif // AVE_H
