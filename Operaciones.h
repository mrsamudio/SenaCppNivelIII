#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

/** Esta clase provee las operaciones de suma, resta, \n
 * multiplicacion, division y potenciacion. Cada una con \n
 * sobrecarga de operadores de tres tipos de datos \n
 * diferentes(int, double, char). Tambien contiene \n
 * un constructor por defecto y uno que carga valores \n
 * a los tipos de datos mencionados anteriormente para \n
 * hacer uso de ellos en todos los metodos sobrecargados.
 * @brief The Operaciones class
 */
class Operaciones
{
public:

    /** Constructor por defecto con variables predeterminadas
     * @brief Operaciones
     */
    Operaciones();
    /** Constructor con inicializacion de variables del usuario
     * @brief Operaciones
     * @param entero
     * @param real
     * @param caracter
     */
    Operaciones(int entero1, int entero2, int entero3,
                double doble1, double doble2, double doble3,
                char caracter1, char caracter2, char caracter3);

    ~Operaciones(){}

    /** Suma de dos valores enteros
     * @brief Suma
     * @param valor1
     * @param valor2
     */
    inline void Suma(int valor1, int valor2){
        cout << "Suma de " << valor1 << " + " << valor2 << endl;
        cout << "El resultado es: " << valor1 + valor2 << endl;
    }
    /** Suma de tres valores enteros
     * @brief Suma
     * @param valor1
     * @param valor2
     * @param valor3
     */
    inline void Suma(int valor1, int valor2, int valor3){
        cout << "Suma de " << valor1 << " + " << valor2 << " + " << valor3 << endl;
        cout << "El resultado es: " << valor1 + valor2 + valor3 << endl;
    }
    /** Suma de dos valores double
     * @brief Suma
     * @param valor1
     * @param valor2
     */
    inline void Suma(double valor1, double valor2){
        cout << "Suma de " << valor1 << " + " << valor2 << endl;
        cout << "El resultado es: " << valor1 + valor2 << endl;
    }
    /** Suma de tres valores double
     * @brief Suma
     * @param valor1
     * @param valor2
     * @param valor3
     */
    inline void Suma(double valor1, double valor2, double valor3){
        cout << "Suma de " << valor1 << " + " << valor2 << " + " << valor3 << endl;
        cout << "El resultado es: " << valor1 + valor2 + valor3 << endl;
    }
    /** Suma de dos valores caracteres
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Suma
     * @param valor1
     * @param valor2
     */
    inline void Suma(char valor1, char valor2){
        cout << "Suma de " << valor1 << " + " << valor2 << endl;
        cout << "El resultado es: " << static_cast<int>(valor1) + static_cast<int>(valor2) << endl;
    }
    /** Suma de tres valores caracteres
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Suma
     * @param valor1
     * @param valor2
     * @param valor3
     */
    inline void Suma(char valor1, char valor2, char valor3){
        cout << "Suma de " << valor1 << " + " << valor2 << " + " << valor3 << endl;
        cout << "El resultado es: " << static_cast<int>(valor1) + static_cast<int>(valor2) + static_cast<int>(valor3)<< endl;
    }

    /** Resta de dos valores enteros
     * @brief Resta
     * @param minuendo
     * @param sustraendo
     */
    inline void Resta(int minuendo, int sustraendo){
        cout << "Resta de " << minuendo << " - " << sustraendo << endl;
        cout << "El resultado es: " << minuendo - sustraendo << endl;
    }
    /** Resta de tres valores enteros
     * @brief Resta
     * @param minuendo
     * @param sustraendo1
     * @param sustraendo2
     */
    inline void Resta(int minuendo, int sustraendo1, int sustraendo2){
        cout << "Resta de " << minuendo << " - " << sustraendo1 << " - " << sustraendo2<< endl;
        cout << "El resultado es: " << minuendo - sustraendo1 - sustraendo2 << endl;
    }
    /** Resta de dos valores double
     * @brief Resta
     * @param minuendo
     * @param sustraendo
     */
    inline void Resta(double minuendo, double sustraendo){
        cout << "Resta de " << minuendo << " - " << sustraendo << endl;
        cout << "El resutado es: " << minuendo - sustraendo << endl;
    }
    /** Resta de tres valores double
     * @brief Resta
     * @param minuendo
     * @param sustraendo1
     * @param sustraendo2
     */
    inline void Resta(double minuendo, double sustraendo1, double sustraendo2){
        cout << "Resta de " << minuendo << " - " << sustraendo1 << " - " << sustraendo2<< endl;
        cout << "El resultado es: " << minuendo - sustraendo1 - sustraendo2 << endl;
    }
    /** Resta de dos valores char
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Resta
     * @param minuendo
     * @param sustraendo
     */
    inline void Resta(char minuendo, char sustraendo){
        cout << "Resta de " << minuendo << " - " << sustraendo << endl;
        cout << "El resultado es: " << static_cast<int>(minuendo) - static_cast<int>(sustraendo) << endl;
    }
    /** Resta de tres valores char
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Resta
     * @param minuendo
     * @param sustraendo1
     * @param sustraendo2
     */
    inline void Resta(char minuendo, char sustraendo1, char sustraendo2){
        cout << "Resta de " << minuendo << " - " << sustraendo1 << " - " << sustraendo2<< endl;
        cout << "El resultado es: " << static_cast<int>(minuendo) - static_cast<int>(sustraendo1) - static_cast<int>(sustraendo2) << endl;
    }

    /** Multiplicacion de dos valores enteros
     * @brief Multiplicacion
     * @param multiplicando
     * @param multiplicador
     */
    inline void Multiplicacion(int multiplicando, int multiplicador){
        cout << "Multiplicacion de " << multiplicando << " * " << multiplicador << endl;
        cout << "El resultado es: " << multiplicando * multiplicador << endl;
    }
    /** Multiplicacion de tres valores enteros
     * @brief Multiplicacion
     * @param multiplicando
     * @param multiplicador1
     * @param multiplicador2
     */
    inline void Multiplicacion(int multiplicando, int multiplicador1, int multiplicador2){
        cout << "Multiplicacion de " << multiplicando << " * " << multiplicador1 << " * " << multiplicador2 << endl;
        cout << "El resultado es: " << multiplicando * multiplicador1 * multiplicador2 << endl;
    }
    /** Multiplicacion de dos valores double
     * @brief Multiplicacion
     * @param multiplicando
     * @param multiplicador
     */
    inline void Multiplicacion(double multiplicando, double multiplicador){
        cout << "Multiplicacion de " << multiplicando << " * " << multiplicador << endl;
        cout << "El resultado es: " << multiplicando * multiplicador << endl;
    }
    /** Multiplicacion de tres valores double
     * @brief Multiplicacion
     * @param multiplicando
     * @param multiplicador1
     * @param multiplicador2
     */
    inline void Multiplicacion(double multiplicando, double multiplicador1, double multiplicador2){
        cout << "Multiplicacion de " << multiplicando << " * " << multiplicador1 << " * " << multiplicador2 << endl;
        cout << "El resultado es: " << multiplicando * multiplicador1 * multiplicador2 << endl;
    }
    /** Multiplicacion de dos valores char
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Multiplicacion
     * @param multiplicando
     * @param multiplicador
     */
    inline void Multiplicacion(char multiplicando, char multiplicador){
        cout << "Multiplicacion de " << multiplicando << " * " << multiplicador << endl;
        cout << "El resultado es: " << static_cast<int>(multiplicando) * static_cast<int>(multiplicador) << endl;
    }
    /** Multiplicacion de tres valores char
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Multiplicacion
     * @param multiplicando
     * @param multiplicador1
     * @param multiplicador2
     */
    inline void Multiplicacion(char multiplicando, char multiplicador1, char multiplicador2){
        cout << "Multiplicacion de " << multiplicando << " * " << multiplicador1 << " * " << multiplicador2 << endl;
        cout << "El resultado es: " << static_cast<int>(multiplicando) * static_cast<int>(multiplicador1) * static_cast<int>(multiplicador2) << endl;
    }

    /** Division de dos enteros
     * @brief Division
     * @param dividendo
     * @param divisor
     */
    inline void Division(int dividendo, int divisor){
        cout << "Division de " << dividendo << " / " << divisor << endl;
        cout << "El resultado es: " << dividendo / divisor << endl;
    }
    /** Division de tres enteros
     * @brief Division
     * @param dividendo
     * @param divisor1
     * @param divisor2
     */
    inline void Division(int dividendo, int divisor1, int divisor2){
        cout << "Division de " << dividendo << " / " << divisor1 << " / " << divisor2 << endl;
        cout << "El resultado es: " << dividendo / divisor1 / divisor2 << endl;
    }
    /** Division de tres double
     * @brief Division
     * @param dividendo
     * @param divisor
     */
    inline void Division(double dividendo, double divisor){
        cout << "Division de " << dividendo << " / " << divisor << endl;
        cout << "El resultado es: " << dividendo / divisor << endl;
    }
    /** Division de tres double
     * @brief Division
     * @param dividendo
     * @param divisor1
     * @param divisor2
     */
    inline void Division(double dividendo, double divisor1, double divisor2){
        cout << "Division de " << dividendo << " / " << divisor1 << " / " << divisor2 << endl;
        cout << "El resultado es: " << dividendo / divisor1 / divisor2 << endl;
    }
    /** Division de dos char
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Division
     * @param dividendo
     * @param divisor
     */
    inline void Division(char dividendo, char divisor){
        cout << "Division de " << dividendo << " / " << divisor << endl;
        cout << "El resultado es: " << static_cast<double>(dividendo) / static_cast<double>(divisor) << endl;
    }
    /** Division de tres char
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Division
     * @param dividendo
     * @param divisor1
     * @param divisor2
     */
    inline void Division(char dividendo, char divisor1, char divisor2){
        cout << "Division de " << dividendo << " / " << divisor1 << " / " << divisor2 << endl;
        cout << "El resultado es: " << static_cast<double>(dividendo) / static_cast<double>(divisor1) / static_cast<double>(divisor2) << endl;
    }

    /** Potenciacion de dos enteros
     * @brief Potenciacion
     * @param base
     * @param exponente
     */
    inline void Potenciacion(int base, int exponente){
        cout << "Potenciacion de " << base << " ^ " << exponente << endl;
        cout << "El resultado es: "
             << powl(base, exponente)
             << endl;
    }
    /** Potenciacion de tres enteros
     * @brief Potenciacion
     * @param base
     * @param exponente1
     * @param exponente2
     */
    inline void Potenciacion(int base, int exponente1, int exponente2){
        cout << "Potenciacion de " << base << " ^ " << exponente1 << " ^ " << exponente2 << endl;
        cout << "El resultado es: "
             << powl(powl(base, exponente1), exponente2)
             << endl;
    }
    /** Potenciacion de dos double
     * @brief Potenciacion
     * @param base
     * @param exponente
     */
    inline void Potenciacion(double base, double exponente){
        cout << "Potenciacion de " << base << " ^ " << exponente << endl;
        cout << "El resultado es: "
             << pow(base, exponente)
             << endl;
    }
    /** Potenciacion de tres double
     * @brief Potenciacion
     * @param base
     * @param exponente1
     * @param exponente2
     */
    inline void Potenciacion(double base, double exponente1, double exponente2){
        cout << "Potenciacion de " << base << " ^ " << exponente1 << " ^ " << exponente2 << endl;
        cout << "El resultado es: "
             << pow(pow(base, exponente1), exponente2)
             << endl;
    }
    /** Potenciacion de dos char
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Potenciacion
     * @param base
     * @param exponente
     */
    inline void Potenciacion(char base, char exponente){
        cout << "Potenciacion de " << base << " ^ " << exponente << endl;
        cout << "El resultado es: "
             << powl(static_cast<long double>(base), static_cast<long double>(exponente))
             << endl;
    }
    /** Potenciacion de tres char
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Potenciacion
     * @param base
     * @param exponente1
     * @param exponente2
     */
    inline void Potenciacion(char base, char exponente1, char exponente2){
        cout << "Potenciacion de " << base << " ^ " << exponente1 << " ^ " << exponente2 << endl;
        cout << "El resultado es: "
             << powl(powl(static_cast<long double>(base), static_cast<long double>(exponente1))
                     , static_cast<long double>(exponente2))
             << endl;
    }

    //getters y setters


    int getEntero1() const;
    void setEntero1(int value);

    int getEntero2() const;
    void setEntero2(int value);

    int getEntero3() const;
    void setEntero3(int value);

    double getDoble1() const;
    void setDoble1(double value);

    double getDoble2() const;
    void setDoble2(double value);

    double getDoble3() const;
    void setDoble3(double value);

    char getCaracter1() const;
    void setCaracter1(char value);

    char getCaracter2() const;
    void setCaracter2(char value);

    char getCaracter3() const;
    void setCaracter3(char value);

private:
    int entero1, entero2, entero3;
    double doble1, doble2, doble3;
    char caracter1, caracter2, caracter3;
};

#endif // OPERACIONES_H
