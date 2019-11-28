#include "Operaciones.h"
#include "Utilidades.h"

using namespace std;

int main()
{
    Utilidades u;
    auto opcion= '0';

    while (opcion != '3') {
        u.limpiarConsola();
        cout << "Por favor escoja una opción:" << endl;
        cout << "1. Ver resultados con valores predeterminados." << endl;
        cout << "2. Ingresar valores personalizados." << endl;
        cout << "3. Salir del programa" << endl;

        cin >> opcion;

        if (opcion == '1') {
            u.limpiarConsola();
            cout << "Mostrando resultados de operaciones con valores predeterminados..." << endl;
            Operaciones o;
            cout << endl << "¡Tiene 10 segundos para revisar los resultados!" ;
            u.pausa(10);
            o.~Operaciones();

        } else if(opcion == '2'){
            u.limpiarConsola();
            cout << "Operaciones con valores personalizados..." << endl;

            int entero1, entero2, entero3;
            double doble1, doble2, doble3;
            char caracter1, caracter2, caracter3;

            cout << "Ingrese un valor entero: " << endl;
            cin >> entero1;
            cout << "Ingrese otro valor entero: " << endl;
            cin >> entero2;
            cout << "Ingrese un ultimo valor entero: " << endl;
            cin >> entero3;
            cout << "Ingrese un valor decimal: " << endl;
            cin >> doble1;
            cout << "Ingrese otro valor decimal: " << endl;
            cin >> doble2;
            cout << "Ingrese un ultimo valor decimal: " << endl;
            cin >> doble3;
            cout << "Ingrese un valor entero: " << endl;
            cin >> caracter1;
            cout << "Ingrese otro valor entero: " << endl;
            cin >> caracter2;
            cout << "Ingrese un ultimo valor entero: " << endl;
            cin >> caracter3;

            Operaciones O(entero1,entero2,entero3,
                          doble1, doble2, doble3,
                          caracter1, caracter2, caracter3);

            cout << endl << "¡Tiene 10 segundos para revisar los resultados!" ;
            u.pausa(10);
            O.~Operaciones();

        } else if(opcion == '3'){
            u.limpiarConsola();
            cout << "Hasta luego, vuelva pronto..." << endl;
            opcion = '3';
            u.pausa(2);
        } else{
            u.limpiarConsola();
            cout << "Ingrese una opción válida!" << endl;
            u.pausa(1);
        }
    }

    return 0;
}
