#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <iostream>

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

    /** Constructor por defecto
     * @brief Operaciones
     */
    Operaciones();
    /** Constructor con inicializacion de variables predeterminadas
     * @brief Operaciones
     * @param entero
     * @param real
     * @param caracter
     */
    Operaciones(int entero, double real, char caracter);

    ~Operaciones();

    /** Suma de dos valores enteros
     * @brief Suma
     * @param valor1
     * @param valor2
     */
    inline void Suma(int valor1, int valor2);
    /** Suma de tres valores enteros
     * @brief Suma
     * @param valor1
     * @param valor2
     * @param valor3
     */
    inline void Suma(int valor1, int valor2, int valor3);
    /** Suma de dos valores double
     * @brief Suma
     * @param valor1
     * @param valor2
     */
    inline void Suma(double valor1, double valor2);
    /** Suma de tres valores double
     * @brief Suma
     * @param valor1
     * @param valor2
     * @param valor3
     */
    inline void Suma(double valor1, double valor2, double valor3);
    /** Suma de dos valores caracteres
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Suma
     * @param valor1
     * @param valor2
     */
    inline void Suma(char valor1, char valor2);
    /** Suma de tres valores caracteres
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Suma
     * @param valor1
     * @param valor2
     * @param valor3
     */
    inline void Suma(char valor1, char valor2, char valor3);

    /** Resta de dos valores enteros
     * @brief Resta
     * @param minuendo
     * @param sustraendo
     */
    inline void Resta(int minuendo, int sustraendo);
    /** Resta de tres valores enteros
     * @brief Resta
     * @param minuendo
     * @param sustraendo1
     * @param sustraendo2
     */
    inline void Resta(int minuendo, int sustraendo1, int sustraendo2);
    /** Resta de dos valores double
     * @brief Resta
     * @param minuendo
     * @param sustraendo
     */
    inline void Resta(double minuendo, double sustraendo);
    /** Resta de tres valores double
     * @brief Resta
     * @param minuendo
     * @param sustraendo1
     * @param sustraendo2
     */
    inline void Resta(double minuendo, double sustraendo1, double sustraendo2);
    /** Resta de dos valores char
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Resta
     * @param minuendo
     * @param sustraendo
     */
    inline void Resta(char minuendo, char sustraendo);
    /** Resta de tres valores char
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Resta
     * @param minuendo
     * @param sustraendo1
     * @param sustraendo2
     */
    inline void Resta(char minuendo, char sustraendo1, char sustraendo2);

    /** Multiplicacion de dos valores enteros
     * @brief Multiplicacion
     * @param multiplicando
     * @param multiplicador
     */
    inline void Multiplicacion(int multiplicando, int multiplicador);
    /** Multiplicacion de tres valores enteros
     * @brief Multiplicacion
     * @param multiplicando
     * @param multiplicador1
     * @param multiplicador2
     */
    inline void Multiplicacion(int multiplicando, int multiplicador1, int multiplicador2);
    /** Multiplicacion de dos valores double
     * @brief Multiplicacion
     * @param multiplicando
     * @param multiplicador
     */
    inline void Multiplicacion(double multiplicando, double multiplicador);
    /** Multiplicacion de tres valores double
     * @brief Multiplicacion
     * @param multiplicando
     * @param multiplicador1
     * @param multiplicador2
     */
    inline void Multiplicacion(double multiplicando, double multiplicador1, double multiplicador2);
    /** Multiplicacion de dos valores char
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Multiplicacion
     * @param multiplicando
     * @param multiplicador
     */
    inline void Multiplicacion(char multiplicando, char multiplicador);
    /** Multiplicacion de tres valores char
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Multiplicacion
     * @param multiplicando
     * @param multiplicador1
     * @param multiplicador2
     */
    inline void Multiplicacion(char multiplicando, char multiplicador1, char multiplicador2);

    /** Division de dos enteros
     * @brief Division
     * @param dividendo
     * @param divisor
     */
    inline void Division(int dividendo, int divisor);
    /** Division de tres enteros
     * @brief Division
     * @param dividendo
     * @param divisor1
     * @param divisor2
     */
    inline void Division(int dividendo, int divisor1, int divisor2);
    /** Division de tres double
     * @brief Division
     * @param dividendo
     * @param divisor
     */
    inline void Division(double dividendo, double divisor);
    /** Division de tres double
     * @brief Division
     * @param dividendo
     * @param divisor1
     * @param divisor2
     */
    inline void Division(double dividendo, double divisor1, double divisor2);
    /** Division de dos char
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Division
     * @param dividendo
     * @param divisor
     */
    inline void Division(char dividendo, char divisor);
    /** Division de tres char
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Division
     * @param dividendo
     * @param divisor1
     * @param divisor2
     */
    inline void Division(char dividendo, char divisor1, char divisor2);

    /** Potenciacion de dos enteros
     * @brief Potenciacion
     * @param base
     * @param exponente
     */
    inline void Potenciacion(int base, int exponente);
    /** Potenciacion de tres enteros
     * @brief Potenciacion
     * @param base
     * @param exponente1
     * @param exponente2
     */
    inline void Potenciacion(int base, int exponente1, int exponente2);
    /** Potenciacion de dos double
     * @brief Potenciacion
     * @param base
     * @param exponente
     */
    inline void Potenciacion(double base, double exponente);
    /** Potenciacion de tres double
     * @brief Potenciacion
     * @param base
     * @param exponente1
     * @param exponente2
     */
    inline void Potenciacion(double base, double exponente1, double exponente2);
    /** Potenciacion de dos char
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Potenciacion
     * @param base
     * @param exponente
     */
    inline void Potenciacion(char base, char exponente);
    /** Potenciacion de tres char
     * @attention Los valores son convertidos a enteros para la operacion
     * @brief Potenciacion
     * @param base
     * @param exponente1
     * @param exponente2
     */
    inline void Potenciacion(char base, char exponente1, char exponente2);
};

#endif // OPERACIONES_H
