#include "Operaciones.h"
Operaciones::Operaciones(int entero, double decimal, char caracter)
{
    setEntero1(entero);
    setEntero2(entero);
    setEntero3(entero);

    setDouble1(decimal);
    setDouble2(decimal);
    setDouble3(decimal);

    setCaracter1(caracter);
    setCaracter2(caracter);
    setCaracter3(caracter);
}


void Operaciones::suma(int sumando1, int sumando2){
    cout << "El resultado la suma " 
         << sumando1 << " + " << sumando2 
         << " es: " << sumando1 + sumando2 << endl;
}
void Operaciones::suma(int sumando1, int sumando2, int sumando3){
    cout << "El resultado la suma " 
         << sumando1 << " + " << sumando2 << " + " << sumando3 
         << " es: " << sumando1 + sumando2 + sumando3 << endl;
}
void Operaciones::suma(double sumando1, double sumando2){
    cout << "El resultado la suma " 
         << sumando1 << " + " << sumando2 
         << " es: " << sumando1 + sumando2 << endl;
}
void Operaciones::suma(double sumando1, double sumando2, double sumando3){
    cout << "El resultado la suma " 
         << sumando1 << " + " << sumando2 << " + " << sumando3 
         << " es: " << sumando1 + sumando2 + sumando3 << endl;
}
void Operaciones::suma(char sumando1, char sumando2){
    cout << "El resultado la suma " 
         << sumando1 << " + " << sumando2
         << " es: " << atoi(&sumando1) + atoi(&sumando2) << endl;
}
void Operaciones::suma(char sumando1, char sumando2, char sumando3){
    cout << "El resultado la suma " 
         << sumando1 << " + " << sumando2 << " + " << sumando3
         << " es: " << atoi(&sumando1) + atoi(&sumando2) + atoi(&sumando3) << endl;
}

void Operaciones::resta(int minuendo, int sustraendo){
    cout << "El resultado de la Resta "
         << minuendo << " - " << sustraendo
         << " es: " << minuendo - sustraendo << endl;
}
void Operaciones::resta(int minuendo, int sustraendo1, int sustraendo2){
    cout << "El resultado de la Resta "
         << minuendo << " - " << sustraendo1 << " - " << sustraendo2
         << " es: " << minuendo - sustraendo1 - sustraendo2 << endl;
}
void Operaciones::resta(double minuendo, double sustraendo){
    cout << "El resultado de la Resta "
         << minuendo << " - " << sustraendo
         << " es: " << minuendo - sustraendo << endl;
}
void Operaciones::resta(double minuendo, double sustraendo1, double sustraendo2){
    cout << "El resultado de la Resta "
         << minuendo << " - " << sustraendo1 << " - " << sustraendo2
         << " es: " << minuendo - sustraendo1 - sustraendo2 << endl;
}
void Operaciones::resta(char minuendo, char sustraendo){
    cout << "El resultado de la Resta "
         << minuendo << " - " << sustraendo
         << " es: " << atoi(&minuendo) - atoi(&sustraendo) << endl;
}
void Operaciones::resta(char minuendo, char sustraendo1, char sustraendo2){
    cout << "El resultado de la Resta "
         <<  minuendo << " - " << sustraendo1 << " - " << sustraendo2
         << " es: " << atoi(&minuendo) - atoi(&sustraendo1) - atoi(&sustraendo2) << endl;
}

void Operaciones::multiplicacion(int multiplicando, int multiplicador){
    cout << "El resultado de la Multiplicacion " 
         << multiplicando << " * " << multiplicador
         << " es: " << multiplicando * multiplicador << endl;
}
void Operaciones::multiplicacion(int multiplicando, int multiplicador1, int multiplicador2){
    cout << "El resultado de la Multiplicacion " 
         << multiplicando << " * " << multiplicador1 << " * " << multiplicador2
         << " es: " << multiplicando * multiplicador1 * multiplicador2 << endl;
}
void Operaciones::multiplicacion(double multiplicando, double multiplicador){
    cout << "El resultado de la Multiplicacion " 
         << multiplicando << " * " << multiplicador
         << " es: " << multiplicando * multiplicador << endl;
}
void Operaciones::multiplicacion(double multiplicando, double multiplicador1, double multiplicador2){
    cout << "El resultado de la Multiplicacion " 
         << multiplicando << " * " << multiplicador1 << " * " << multiplicador2
         << " es: " << multiplicando * multiplicador1 * multiplicador2 << endl;
}
void Operaciones::multiplicacion(char multiplicando, char multiplicador){
    cout << "El resultado de la Multiplicacion " 
         << multiplicando << " * " << multiplicador
         << " es: " << atoi(&multiplicando) * atoi(&multiplicador) << endl;
}
void Operaciones::multiplicacion(char multiplicando, char multiplicador1, char multiplicador2){
    cout << "El resultado de la Multiplicacion " 
         << multiplicando << " * " << multiplicador1 << " * " << multiplicador2
         << " es: " << atoi(&multiplicando) * atoi(&multiplicador1) * atoi(&multiplicador2) << endl;
}

void Operaciones::division(int dividendo, int divisor){
    cout << "El resultado de la Division "
         << dividendo << " / " << divisor
         << " es: " << dividendo / divisor << endl;
}
void Operaciones::division(int dividendo, int divisor1, int divisor2){
    cout << "El resultado de la Division "
         << dividendo << " / " << divisor1 << " / " << divisor2
         << " es: " << dividendo / divisor1 / divisor2 << endl;
}
void Operaciones::division(double dividendo, double divisor){
    cout << "El resultado de la Division "
         << dividendo << " / " << divisor
         << " es: " << dividendo / divisor << endl;
}
void Operaciones::division(double dividendo, double divisor1, double divisor2){
    cout << "El resultado de la Division "
         << dividendo << " / " << divisor1 << " / " << divisor2
         << " es: " << dividendo / divisor1 / divisor2 << endl;
}
void Operaciones::division(char dividendo, char divisor){
    cout << "El resultado de la Division "
         << dividendo << " / " << divisor
         << " es: " << (double) atoi(&dividendo) / (double) atoi(&divisor) << endl;
}
void Operaciones::division(char dividendo, char divisor1, char divisor2){
    cout << "El resultado de la Division "
         << dividendo << " / " << divisor1 << " / " << divisor2
         << " es: " << (double) atoi(&dividendo) / (double) atoi(&divisor1) / (double) atoi(&divisor2) << endl;
}

void Operaciones::potenciacion(int base, int exponente){
    cout << "El resultado de la Potenciacion " 
    << base << "^" << exponente
    << " es: " << pow(base, exponente) << endl;
}
void Operaciones::potenciacion(int base, int exponente1, int exponente2){
    cout << "El resultado de la Potenciacion " 
    << base << "^" << exponente1 << "^" << exponente2
    << " es: " << pow(pow(base, exponente1), exponente2) << endl;
}
void Operaciones::potenciacion(double base, double exponente){
    cout << "El resultado de la Potenciacion " 
    << base << "^" << exponente
    << " es: " << pow(base, exponente) << endl;
}
void Operaciones::potenciacion(double base, double exponente1, double exponente2){
    cout << "El resultado de la Potenciacion " 
    << base << "^" << exponente1 << "^" << exponente2
    << " es: " << pow(pow(base, exponente1), exponente2)  << endl;
}
void Operaciones::potenciacion(char base, char exponente){
    cout << "El resultado de la Potenciacion " 
    << base << "^" << exponente
    << " es: " << pow(atoi(&base), atoi(&exponente)) << endl;
}
void Operaciones::potenciacion(char base, char exponente1, char exponente2){
    cout << "El resultado de la Potenciacion " 
    << base << "^" << exponente1 << "^" << exponente2
    << " es: " << pow(pow(atoi(&base), atoi(&exponente1)), atoi(&exponente2))  << endl;
}
