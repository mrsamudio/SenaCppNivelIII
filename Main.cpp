#include "Operaciones.h"

void sumas(Operaciones obj);
void restas(Operaciones obj);
void multiplicaciones(Operaciones obj);
void divisiones(Operaciones obj);
void potencias(Operaciones obj);
char menu(char opcion);
void limpiarConsola();


int main()
{
    char opcion = '1';

    while (opcion != '3') {
        opcion = menu(opcion);
    }

    return 0;
}

void sumas(Operaciones obj){
    obj.suma(obj.getEntero1(), obj.getEntero2());
    obj.suma(obj.getEntero1(), obj.getEntero2(), obj.getEntero3());

    obj.suma(obj.getDouble1(), obj.getDouble2());
    obj.suma(obj.getDouble1(), obj.getDouble2(), obj.getDouble3());

    obj.suma(obj.getCaracter1(), obj.getCaracter2());
    obj.suma(obj.getCaracter1(), obj.getCaracter2(), obj.getCaracter3());
}

void restas(Operaciones obj){
    obj.resta(obj.getEntero1(), obj.getEntero2());
    obj.resta(obj.getEntero1(), obj.getEntero2(), obj.getEntero3());

    obj.resta(obj.getDouble1(), obj.getDouble2());
    obj.resta(obj.getDouble1(), obj.getDouble2(), obj.getDouble3());

    obj.resta(obj.getCaracter1(), obj.getCaracter2());
    obj.resta(obj.getCaracter1(), obj.getCaracter2(), obj.getCaracter3());
}

void multiplicaciones(Operaciones obj){
    obj.multiplicacion(obj.getEntero1(), obj.getEntero2());
    obj.multiplicacion(obj.getEntero1(), obj.getEntero2(), obj.getEntero3());

    obj.multiplicacion(obj.getDouble1(), obj.getDouble2());
    obj.multiplicacion(obj.getDouble1(), obj.getDouble2(), obj.getDouble3());

    obj.multiplicacion(obj.getCaracter1(), obj.getCaracter2());
    obj.multiplicacion(obj.getCaracter1(), obj.getCaracter2(), obj.getCaracter3());
}

void divisiones(Operaciones obj){
    obj.division(obj.getEntero1(), obj.getEntero2());
    obj.division(obj.getEntero1(), obj.getEntero2(), obj.getEntero3());

    obj.division(obj.getDouble1(), obj.getDouble2());
    obj.division(obj.getDouble1(), obj.getDouble2(), obj.getDouble3());

    obj.division(obj.getCaracter1(), obj.getCaracter2());
    obj.division(obj.getCaracter1(), obj.getCaracter2(), obj.getCaracter3());
}

void potencias(Operaciones obj){
    obj.potenciacion(obj.getEntero1(), obj.getEntero2());
    obj.potenciacion(obj.getEntero1(), obj.getEntero2(), obj.getEntero3());

    obj.potenciacion(obj.getDouble1(), obj.getDouble2());
    obj.potenciacion(obj.getDouble1(), obj.getDouble2(), obj.getDouble3());

    obj.potenciacion(obj.getCaracter1(), obj.getCaracter2());
    obj.potenciacion(obj.getCaracter1(), obj.getCaracter2(), obj.getCaracter3());
}

char menu(char opcion){

    cout << " Bienvenido al desarrollo de la actividad 2."
         << endl << "Por favor escoja una opción:" << endl;
    cout << "1. Realizar operaciones con números pseudo aleatorios" << endl;
    cout << "2. Realizar operaciones con números ingresados por el usuario" << endl;
    cout << "3. Salir del programa" << endl;

    cin >> opcion;

    Operaciones obj;
    int entero = 0;
    double decimal=0.0;
    char caracter='0';

    switch (opcion) {

        case '1':
            sumas(obj);
            restas(obj);
            multiplicaciones(obj);
            divisiones(obj);
            potencias(obj);
        break;
        case '2':
            cout << "Por favor ingrese un número entero: ";
            cin >> entero;
            cout << "Por favor ingrese un número decimal: ";
            cin >> decimal;
            cout << "Por favor ingrese otro número entero de un digito: ";
            cin >> caracter;
            obj = Operaciones(entero, decimal, caracter);

            sumas(obj);
            restas(obj);
            multiplicaciones(obj);
            divisiones(obj);
            potencias(obj);
        break;
        case '3':
            cout << "Fin del programa";
        break;

        default:
            cout << " intente de nuevo";
        break;
    }
    return opcion;
}
