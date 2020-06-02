#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <iostream>
#include <random>
#include <cmath>
#include <chrono>

using namespace std;

/** @abstract Esta clase provee las operaciones de suma, resta, \n
 * multiplicacion, division y potenciacion. Cada una con \n
 * sobrecarga de operadores de tres tipos de datos \n
 * diferentes(int, double, char). Tambien contiene \n
 * un constructor por defecto y uno que carga valores \n
 * a los tipos de datos mencionados anteriormente para \n
 * hacer uso de ellos en todos los metodos sobrecargados.
 * @brief La clase Operaciones
 */
class Operaciones
{
public:

    /**
     * @brief Constructor por defecto Operaciones
     */
    Operaciones(){

        setEntero1(genAleatorioInt());
        setEntero2(genAleatorioInt());
        setEntero3(genAleatorioInt());

        setDouble1(genAleatorioDouble());
        setDouble2(genAleatorioDouble());
        setDouble3(genAleatorioDouble());

        setCaracter1(genAleatorioChar());
        setCaracter2(genAleatorioChar());
        setCaracter3(genAleatorioChar());

    };
    /**
     * @brief Operaciones: Constructor con inicializacion de variables Ingresadas por el usuario
     * @param entero
     * @param real
     * @param caracter
     */
    Operaciones(int entero, double decimal, char caracter);

    ~Operaciones(){}

    // Metodos sobrecargados de suma
    /**
     * @brief Suma de dos valores enteros
     * @param sumando1
     * @param sumando2
     */
    void suma(int sumando1, int sumando2);
    /**
     * @brief Suma de tres valores enteros
     * @param sumando1
     * @param sumando2
     * @param sumando3
     */
    void suma(int sumando1, int sumando2, int sumando3);
    /**
     * @brief Suma de dos valores double
     * @param sumando1
     * @param sumando2
     */
    void suma(double sumando1, double sumando2);
    /**
     * @brief Suma de tres valores double
     * @param sumando1
     * @param sumando2
     * @param sumando3
     */
    void suma(double sumando1, double sumando2, double sumando3);
    /**
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Suma de dos valores caracteres
     * @param sumando1
     * @param sumando2
     */
    void suma(char sumando1, char sumando2);
    /**
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Suma de tres valores caracteres
     * @param sumando1
     * @param sumando2
     * @param sumando3
     */
    void suma(char sumando1, char sumando2, char sumando3);

    // Metodos sobrecargados de resta
    /**
     * @brief Resta de dos valores enteros
     * @param minuendo
     * @param sustraendo
     */
    void resta(int minuendo, int sustraendo);
    /**
     * @brief Resta de tres valores enteros
     * @param minuendo
     * @param sustraendo1
     * @param sustraendo2
     */
    void resta(int minuendo, int sustraendo1, int sustraendo2);
    /**
     * @brief Resta de dos valores double
     * @param minuendo
     * @param sustraendo
     */
    void resta(double minuendo, double sustraendo);
    /**
     * @brief Resta de tres valores double
     * @param minuendo
     * @param sustraendo1
     * @param sustraendo2
     */
    void resta(double minuendo, double sustraendo1, double sustraendo2);
    /**
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Resta de dos valores char
     * @param minuendo
     * @param sustraendo
     */
    void resta(char minuendo, char sustraendo);
    /**
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Resta de tres valores char
     * @param minuendo
     * @param sustraendo1
     * @param sustraendo2
     */
    void resta(char minuendo, char sustraendo1, char sustraendo2);

    // Metodos sobrecargados de multiplicacion
    /**
     * @brief Multiplicacion de dos valores enteros
     * @param multiplicando
     * @param multiplicador
     */
    void multiplicacion(int multiplicando, int multiplicador);
    /**
     * @brief Multiplicacion de tres valores enteros
     * @param multiplicando
     * @param multiplicador1
     * @param multiplicador2
     */
    void multiplicacion(int multiplicando, int multiplicador1, int multiplicador2);
    /**
     * @brief Multiplicacion de dos valores double
     * @param multiplicando
     * @param multiplicador
     */
    void multiplicacion(double multiplicando, double multiplicador);
    /**
     * @brief Multiplicacion de tres valores double
     * @param multiplicando
     * @param multiplicador1
     * @param multiplicador2
     */
    void multiplicacion(double multiplicando, double multiplicador1, double multiplicador2);
    /**
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Multiplicacion de dos valores char
     * @param multiplicando
     * @param multiplicador
     */
    void multiplicacion(char multiplicando, char multiplicador);
    /**
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Multiplicacion de tres valores char
     * @param multiplicando
     * @param multiplicador1
     * @param multiplicador2
     */
    void multiplicacion(char multiplicando, char multiplicador1, char multiplicador2);

    // Metodos sobrecargados de division
    /**
     * @brief Division de dos enteros
     * @param dividendo
     * @param divisor
     */
    void division(int dividendo, int divisor);
    /**
     * @brief Division de tres enteros
     * @param dividendo
     * @param divisor1
     * @param divisor2
     */
    void division(int dividendo, int divisor1, int divisor2);
    /**
     * @brief Division de tres double
     * @param dividendo
     * @param divisor
     */
    void division(double dividendo, double divisor);
    /**
     * @brief Division de tres double
     * @param dividendo
     * @param divisor1
     * @param divisor2
     */
    void division(double dividendo, double divisor1, double divisor2);
    /**
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Division de dos char
     * @param dividendo
     * @param divisor
     */
    void division(char dividendo, char divisor);
    /**
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Division de tres char
     * @param dividendo
     * @param divisor1
     * @param divisor2
     */
    void division(char dividendo, char divisor1, char divisor2);

    // Metodos sobrecargados de potenciacion
    /**
     * @brief Potenciacion de dos enteros
     * @param base
     * @param exponente
     */
    void potenciacion(int base, int exponente);
    /**
     * @brief Potenciacion de tres enteros
     * @param base
     * @param exponente1
     * @param exponente2
     */
    void potenciacion(int base, int exponente1, int exponente2);
    /**
     * @brief Potenciacion de dos double
     * @param base
     * @param exponente
     */
    void potenciacion(double base, double exponente);
    /**
     * @brief Potenciacion de tres double
     * @param base
     * @param exponente1
     * @param exponente2
     */
    void potenciacion(double base, double exponente1, double exponente2);
    /**
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Potenciacion de dos char
     * @param base
     * @param exponente
     */
    void potenciacion(char base, char exponente);
    /**
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Potenciacion de tres char
     * @param base
     * @param exponente1
     * @param exponente2
     */
    void potenciacion(char base, char exponente1, char exponente2);

    // Metodos set y get
    /**
     * @brief setEntero1
     * @param valor
     */
    inline void setEntero1(int valor){ this->entero1 = valor; }
    /**
     * @brief getEntero1
     * @return
     */
    inline int getEntero1(){ return this->entero1; }

    /**
     * @brief setEntero2
     * @param valor
     */
    inline void setEntero2(int valor){ this->entero2 = valor; }
    /**
     * @brief getEntero2
     * @return
     */
    inline int getEntero2(){ return this->entero2; }

    /**
     * @brief setEntero3
     * @param valor
     */
    inline void setEntero3(int valor){ this->entero3 = valor; }
    /**
     * @brief getEntero3
     * @return
     */
    inline int getEntero3(){ return this->entero3; }

    /**
     * @brief setDouble1
     * @param valor
     */
    inline void setDouble1(double valor){ this->double1 = valor; }
    /**
     * @brief getDouble1
     * @return
     */
    inline double getDouble1(){ return this->double1; }

    /**
     * @brief setDouble2
     * @param valor
     */
    inline void setDouble2(double valor){ this->double2 = valor; }
    /**
     * @brief getDouble2
     * @return
     */
    inline double getDouble2(){ return this->double2; }

    /**
     * @brief setDouble3
     * @param valor
     */
    inline void setDouble3(double valor){ this->double3 = valor; }
    /**
     * @brief getDouble3
     * @return
     */
    inline double getDouble3(){ return this->double3; }

    /**
     * @brief setCaracter1
     * @param valor
     */
    inline void setCaracter1(char valor){ this->caracter1 = valor; }
    /**
     * @brief getCaracter1
     * @return
     */
    inline char getCaracter1(){ return this->caracter1; }

    /**
     * @brief setCaracter2
     * @param valor
     */
    inline void setCaracter2(char valor){ this->caracter2 = valor; }
    /**
     * @brief getCaracter2
     * @return
     */
    inline char getCaracter2(){ return this->caracter2; }

    /**
     * @brief setCaracter3
     * @param valor
     */
    inline void setCaracter3(char valor){ this->caracter3 = valor; }
    /**
     * @brief getCaracter3
     * @return
     */
    inline char getCaracter3(){ return this->caracter3; }

    //Generacion de números aleatorios
    /**
     * @brief genAleatorioInt
     * @return
     */
    inline int genAleatorioInt(){
        uniform_int_distribution<uint32_t> uint_aleatorio100(0,100); // Con rango de 0 a 10
        semilla = rand();
        this->gnr.seed(semilla);
        return uint_aleatorio100(gnr);
    }

    /**
     * @brief genAleatorioDouble
     * @return
     */
    inline double genAleatorioDouble(){
        uniform_real_distribution<double_t> udouble_aleatorio559(40.9, 55.9); // con rango de 40.9 a 55.9
        semilla = rand();
        this->gnr.seed(semilla);
        return udouble_aleatorio559(gnr);
    }

    /**
     * @brief genAleatorioChar
     * @return
     */
    inline char genAleatorioChar(){
        // Con rango de 48 a 57 representación decimal de caracteres ascii
        uniform_int_distribution<uint32_t> uint_aleatorio100(48,57);

        semilla = rand();
        this->gnr.seed(semilla);
        return (int) uint_aleatorio100(gnr);
    }


private:
    int entero1 = 0, entero2 = 0, entero3 = 0;
    double double1 = 0.0, double2 = 0.0, double3 = 0.0;
    char caracter1 = '0', caracter2 = '0', caracter3 = '0';

    //Configuración del motor y la semilla de numeros aleatorios
    typedef std::mt19937_64 GENERADOR;
    uint64_t semilla;
    GENERADOR gnr;

};

#endif // OPERACIONES_H
