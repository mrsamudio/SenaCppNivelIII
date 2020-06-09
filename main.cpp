#include <iostream>
#include "Utilidades.h"
# include "Vendedor.h"
#include "Promedios.h"

using namespace std;

//Declaración de funciones
char menu(char opcion, Vendedor *&obj2, string nombre);
void cargaVentaxVendedor(int m, Vendedor *&obj2, string nombre, int n);
void informe();

int numVendedores = 0;
int meses = 0;
unsigned long sumVentasXVendedor=0;
double sumProVendedores = 0.0;
Vendedor* obj2 = nullptr;
Promedios p;
Utilidades h;

int main(int argc, char *argv[])
{

    char opcion = '1';
    string nombre;

    while (opcion != '3')
        opcion = menu(opcion, obj2, nombre);

    cout << argc << argv;
    return 0;
}

char menu(char opcion, Vendedor *&obj2, string nombre){

    cout << " Bienvenido al desarrollo de la actividad 3."
         << endl << "Por favor escoja una opción:" << endl;
    cout << "1. Calcular promedio con los datos ingresados por el usuario" << endl;
    cout << "2. Mostrar informe" << endl;
    cout << "3. Salir del programa" << endl;

    cin >> opcion;

    int n = 0;
    int m = 0;

    switch (opcion) {

        case '1':
            h.limpiarConsola();
            cargaVentaxVendedor(m, obj2, nombre, n);
            h.pausa(3);
            h.limpiarConsola();
        break;

        case '2':
            h.limpiarConsola();
            informe();
            h.pausa(5);
            h.limpiarConsola();
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

void cargaVentaxVendedor(int m, Vendedor *&obj2, string nombre, int n)

{
    while ((n <= 0) || ( m <= 0)) {
        cout << "Por favor ingrese el número de meses de ventas a registrar: ";
        cin >> m;
        meses = m;
        cout << "Por favor ingrese el número de vendedores a registrar: ";
        cin >> n;
        numVendedores = n;
        if ((n <= 0) || (m <= 0))
            cout << "Los vendedores  y los meses a registrar no puden ser 0."
                 << endl << "Número de vendedores actuales: " << n
                 << endl << "Número de meses a registrar actuales: " << meses << endl;
    }

    obj2 = new Vendedor[n];

    // Carga de vendedores y ventas
    for (int i=0; i < n ; i++) {
        cout << "Por favor ingrese el nombre del vendedor: ";
        cin >> nombre;
        obj2[i].setId(i+1);
        obj2[i].setNombre(nombre);
        obj2[i].setVenta(obj2[i].cargarVentas(m));
    }
}

void informe()
{
    cout << "el numero de vendedores es: " << numVendedores << endl;
    cout << "el numero de meses es: " << meses << endl;
    for (int i=0; i < numVendedores ; i++) {
        cout << " nombre del vendedor: "
             << obj2[i].getNombre() << endl;

        sumVentasXVendedor =0;
        for (int j = 0 ;j < meses; j++) {
            cout << "Mes: " << obj2[i].getVenta()[j].getMes() << endl;
            cout << "Valor de venta: " << obj2[i].getVenta()[j].getValor() << endl;
            sumVentasXVendedor += obj2[i].getVenta()[j].getValor();
        }

        //Calculo del promedio por vendedor
        cout << "El promedio de los meses(" << meses
             << ") del vendedor " << obj2[i].getNombre()
             << " es: "
             << p.proVendedor(sumVentasXVendedor,meses) << endl << endl;
        sumProVendedores += p.proVendedor(sumVentasXVendedor,meses);
    }
    cout << "El promedio de ventas de todos los vendedores es: "
         << p.proTodos(sumProVendedores, numVendedores) << endl;
}


