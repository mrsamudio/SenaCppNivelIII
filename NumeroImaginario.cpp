#include "NumeroImaginario.h"

NumeroImaginario::NumeroImaginario(){
    Entero = 0;
    Imaginario = 0;
}

NumeroImaginario::NumeroImaginario(double x, double i)
{
    Entero = x;
    Imaginario = i;
}

NumeroImaginario NumeroImaginario::operator +(const NumeroImaginario& a)const {

    NumeroImaginario aux;
    aux.Entero = Entero + a.Entero;
    aux.Imaginario = Imaginario + a.Imaginario;
    return aux;
}

NumeroImaginario NumeroImaginario::operator -(const NumeroImaginario& a)const {

    NumeroImaginario aux;
    aux.Entero = Entero - a.Entero;
    aux.Imaginario = Imaginario - a.Imaginario;
    return aux;
}

NumeroImaginario operator *(const NumeroImaginario& a, const NumeroImaginario& b){

    NumeroImaginario aux;
    std::complex<double> term1(a.Entero, a.Imaginario);
    std::complex<double> term2(b.Entero, b.Imaginario);
    term1 *= term2;
    aux.Entero = term1.real();
    aux.Imaginario = term1.imag();
    return aux;
}

NumeroImaginario NumeroImaginario::operator /(const NumeroImaginario& a)const {

    NumeroImaginario aux;
    std::complex<double> term1(Entero, Imaginario);
    std::complex<double> term2(a.Entero, a.Imaginario);
    term1 /= term2;
    aux.Entero = term1.real();
    aux.Imaginario = term1.imag();
    return aux;
}

