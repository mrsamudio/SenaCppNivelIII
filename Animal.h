/* Animal.h
 * Esta es la clase base Animal, de la cual se pueden derivar hábito y nombre
 */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Animal
{
public:
    const vector<string> TIPOHABITO = { "Salvaje", "Criadero", "Doméstico" };
    const vector<string> TIPOCOMIDA ={ "Carnivoro", "Herbivoro" };

    inline Animal(){}
    inline ~Animal(){}

    //Métodos get y set
     string getNombre(){return this->nombre;}
    inline void setNombre(string nombre){this->nombre = nombre;}

    inline bool getSangre(){return this->sangreCaliente;}
    inline void setSangre(bool caliente){this->sangreCaliente = caliente;}

    /** Es carnivoro o herbivoro?
     * @brief setTipoComida
     * @param tipo
     */
    inline void setTipoComida(char tipo){
        if (tipo == '0') {
            this->tipoComida = TIPOCOMIDA[0];
        } else {
            this->tipoComida = TIPOCOMIDA[1];
        }
    }
    inline string getTipoComida(){return this->tipoComida;}

    /** Es salvaje, de criadero o doméstico?
     * @brief setTipoHabito
     * @param habito
     */
    inline void setTipoHabito(char habito){
        switch (habito) {
        case '0':
            this->habito = TIPOHABITO[0];
            break;
        case '1':
            this->habito = TIPOHABITO[1];
            break;
        case '2':
            this->habito = TIPOHABITO[2];
            break;
        default:
            break;
        }
    }
    inline string getTipoHabito(){return this->habito;}

private:
    string nombre="";
    bool sangreCaliente = true;
    string tipoComida = "";
    string habito = "";
};

#endif // ANIMAL_H
