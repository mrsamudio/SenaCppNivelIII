#ifndef NUMEROIMAGINARIO_H
#define NUMEROIMAGINARIO_H

#include <sstream>
#include <string>
#include <complex>

class NumeroImaginario
{
public:
    NumeroImaginario();
    NumeroImaginario(double z, double i);

    /**
     * @brief Sobrecarga del operador +, suma parte real a parte real y parte imaginaria a parte imaginaria
     * @param pEntera
     * @param pImaginaria
     * @return
     */
    NumeroImaginario operator +(const NumeroImaginario&)const;
    /**
     * @brief Sobrecarga del operador -
     * @param pEntera
     * @param pImaginaria
     * @return
     */
    NumeroImaginario operator -(const NumeroImaginario&)const ;
    /**
     * @brief Sobrecarga del operador *
     * @param pEntera
     * @param pImaginaria
     * @return
     */
    friend NumeroImaginario operator *(const NumeroImaginario& a, const NumeroImaginario& b);
    /**
     * @brief Sobrecarga del operador /
     * @param pEntera
     * @param pImaginaria
     * @return
     */
    NumeroImaginario operator /(const NumeroImaginario&)const ;

    /**
     * @brief Impresion del resultado en cadena de caracteres
     * @return
     */
    std::string resultado(){
        std::ostringstream res;
        res << "El resultado de la operacion es: " << Entero << " + " << Imaginario << "i" << std::endl;
        return res.str();
    }

private:
    double Entero;
    double Imaginario;
};

#endif // NUMEROIMAGINARIO_H
