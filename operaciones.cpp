#include "Operaciones.h"

Operaciones::Operaciones():
    entero1(11), entero2(3), entero3(7),
    doble1(13.8), doble2(2.5), doble3(3.4),
    caracter1('9'), caracter2('6'), caracter3('2'){

    cout << "________________________________" << endl;
    cout << "Operaciones de suma..." << endl;
    Suma(entero1,entero2);
    Suma(entero1, entero2, entero3);
    Suma(doble1, doble2);
    Suma(doble1, doble2, doble3);
    Suma(caracter1, caracter2);
    Suma(caracter1, caracter2, caracter3);

    cout << "________________________________" << endl;
    cout << "Operaciones de resta..." << endl;
    Resta(entero1, entero2);
    Resta(entero1, entero2, entero3);
    Resta(doble1, doble2);
    Resta(doble1, doble2, doble3);
    Resta(caracter1, caracter2);
    Resta(caracter1, caracter2, caracter3);

    cout << "________________________________" << endl;
    cout << "Operaciones de multiplicacion..." << endl;
    Multiplicacion(entero1, entero2);
    Multiplicacion(entero1, entero2, entero3);
    Multiplicacion(doble1, doble2);
    Multiplicacion(doble1, doble2, doble3);
    Multiplicacion(caracter1, caracter2);
    Multiplicacion(caracter1, caracter2, caracter3);

    cout << "________________________________" << endl;
    cout << "Operaciones de division..." << endl;
    Division(entero1, entero2);
    Division(entero1, entero2, entero3);
    Division(doble1, doble2);
    Division(doble1, doble2, doble3);
    Division(caracter1, caracter2);
    Division(caracter1, caracter2, caracter3);

    cout << "________________________________" << endl;
    cout << "Operaciones de potenciacion..." << endl;
    Potenciacion(entero1, entero2);
    Potenciacion(entero1, entero2, entero3);
    Potenciacion(doble1, doble2);
    Potenciacion(doble1, doble2, doble3);
    Potenciacion(caracter1, caracter2);
    Potenciacion(caracter1, caracter2, caracter3);
}

Operaciones::Operaciones(int entero1, int entero2, int entero3,
                         double doble1, double doble2, double doble3,
                         char caracter1, char caracter2, char caracter3){

    setEntero1(entero1);
    setEntero2(entero2);
    setEntero3(entero3);
    setDoble1(doble1);
    setDoble2(doble2);
    setDoble3(doble3);
    setCaracter1(caracter1);
    setCaracter2(caracter2);
    setCaracter3(caracter3);

    cout << "________________________________" << endl;
    cout << "Operaciones de suma..." << endl;
    Suma(entero1,entero2);
    Suma(entero1, entero2, entero3);
    Suma(doble1, doble2);
    Suma(doble1, doble2, doble3);
    Suma(caracter1, caracter2);
    Suma(caracter1, caracter2, caracter3);

    cout << "________________________________" << endl;
    cout << "Operaciones de resta..." << endl;
    Resta(entero1, entero2);
    Resta(entero1, entero2, entero3);
    Resta(doble1, doble2);
    Resta(doble1, doble2, doble3);
    Resta(caracter1, caracter2);
    Resta(caracter1, caracter2, caracter3);

    cout << "________________________________" << endl;
    cout << "Operaciones de multiplicacion..." << endl;
    Multiplicacion(entero1, entero2);
    Multiplicacion(entero1, entero2, entero3);
    Multiplicacion(doble1, doble2);
    Multiplicacion(doble1, doble2, doble3);
    Multiplicacion(caracter1, caracter2);
    Multiplicacion(caracter1, caracter2, caracter3);

    cout << "________________________________" << endl;
    cout << "Operaciones de division..." << endl;
    Division(entero1, entero2);
    Division(entero1, entero2, entero3);
    Division(doble1, doble2);
    Division(doble1, doble2, doble3);
    Division(caracter1, caracter2);
    Division(caracter1, caracter2, caracter3);

    cout << "________________________________" << endl;
    cout << "Operaciones de potenciacion..." << endl;
    Potenciacion(entero1, entero2);
    Potenciacion(entero1, entero2, entero3);
    Potenciacion(doble1, doble2);
    Potenciacion(doble1, doble2, doble3);
    Potenciacion(caracter1, caracter2);
    Potenciacion(caracter1, caracter2, caracter3);
}

int Operaciones::getEntero1() const
{
    return entero1;
}

void Operaciones::setEntero1(int value)
{
    entero1 = value;
}

int Operaciones::getEntero2() const
{
    return entero2;
}

void Operaciones::setEntero2(int value)
{
    entero2 = value;
}

int Operaciones::getEntero3() const
{
    return entero3;
}

void Operaciones::setEntero3(int value)
{
    entero3 = value;
}

double Operaciones::getDoble1() const
{
    return doble1;
}

void Operaciones::setDoble1(double value)
{
    doble1 = value;
}

double Operaciones::getDoble2() const
{
    return doble2;
}

void Operaciones::setDoble2(double value)
{
    doble2 = value;
}

double Operaciones::getDoble3() const
{
    return doble3;
}

void Operaciones::setDoble3(double value)
{
    doble3 = value;
}

char Operaciones::getCaracter1() const
{
    return caracter1;
}

void Operaciones::setCaracter1(char value)
{
    caracter1 = value;
}

char Operaciones::getCaracter2() const
{
    return caracter2;
}

void Operaciones::setCaracter2(char value)
{
    caracter2 = value;
}

char Operaciones::getCaracter3() const
{
    return caracter3;
}

void Operaciones::setCaracter3(char value)
{
    caracter3 = value;
}

