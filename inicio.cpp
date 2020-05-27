/* inicio.cpp
 *
 */

#include "inicio.h"



// Métodos utilitarios
/** Limpiar Consola en windows o linux
 * @brief inicio::limpiarConsola
 */
void inicio::limpiarConsola()
{
// directiva para windows 10
#ifdef _WIN32
    system("cls");
#elif __linux__
    system("clear");
#else
    cout <<"Sistema operativo no reconocido";
#endif
}

/** Da tiempo al usuario para ver el resultado
 * @brief inicio::pausa
 * @param seg
 */
void inicio::pausa(int seg)
{
    this_thread::sleep_for(chrono::seconds(seg));
}

/*
ostream& operator<<(ostream& out, const inicio &mamife){
    out << "{";
    copy(begin(mamife.m), end(mamife.m), ostream_iterator<Mamifero>(out, ";"));
    return out;
}*/

/** Permite que el usuario pueda ingresar 3 o más animales por cada tipo
 * @brief inicio::pregunta
 */
void inicio::pregunta()
{
    unsigned int num = 0;
    string res = "no";
    cout << "Debe ingresar mínimo 2 animales por cada tipo(Ave, Mamifero y Reptil)," << endl;
    cout << "¿Desea modificar el número de animales a ingresar?: digite \"si\" ó \"no\": ";
    cin >> res;

    if (res == "si") {
        cout << "Por favor ingrese el número de animales a ingresar:" << endl;
        cin >> num;
        if (num <= 2) {
            cout << "Mímino 2 animales por cada tipo, no hay cambios!" << endl;
            pausa(2);
        }else{
            setMin(num);
        }
    }
}


/** Menú para la interfaz de linea de comandos
 * @brief inicio::menu
 */
void inicio::menu()
{

    char opcion = 'a';

    cout << "Nota: únicamente el número de la opción debe ser ingresado." << endl << endl;

    while (opcion != '5') {

        //limpiarConsola();
        cout << endl << "Por favor escoja una opción:" << endl;
        cout << "1. Agregar Mamífero" << endl;
        cout << "2. Agregar Ave" << endl;
        cout << "3. Agregar Reptil" << endl;
        cout << "4. Listar animales" << endl;
        cout << "5. Salir del programa" << endl;

        cin >> opcion;

        switch (opcion) {
            case '1': //1. Agregar Mamífero
                for (unsigned int var = 0; var < getMin(); ++var) {
                    limpiarConsola();

                    cout << "Ingrese el nombre del Mamífero " << var+1 << ": ";
                    getline (cin >> std::ws, nombre);

                    cout << "Si el Mamífero es de sangre fria ingrese 0, 1 si es de sangre caliente: ";
                    cin >> sangre;

                    cout << "Ingrese el color de pelo del Mamífero: ";
                    getline (cin >> std::ws, color);// >> color;

                    cout << "Ingrese 0 si el animal es Carnivoro, "
                         << "Ingrese 1 si el animal es Herbivoro: ";
                    cin >> tipoComida;

                    cout << "Ingrese 0 si es Salvaje, 1 si es de criadero, "
                         << "2 si es Doméstico: ";
                    cin >> habito;

                    cout << "Ingrese 0 si el animal tiene patas Plantígradas, " << "\n";
                    cout << "Ingrese 1 si el animal tiene patas Digitígradas, " << "\n";
                    cout << "Ingrese 2 si el animal tiene patas Unguladas: ";
                    cin >> patas;

                    m.push_back(new Mamifero(nombre, sangre, color, tipoComida, habito, patas));
                }
                break;

            case '2': //2. Agregar Ave
                for(unsigned int var = 0; var < getMin(); ++var)
                {
                    limpiarConsola();

                    cout << "Ingrese el nombre del Ave " << var+1 << ": ";
                    getline (cin >> std::ws, nombre);

                    cout << "Si el Ave es de sangre fria ingrese 0, 1 si es de sangre caliente: ";
                    cin >> sangre;

                    cout << "Ingrese el color del plumaje del Ave: ";
                    getline (cin >> std::ws, color);

                    cout << "Ingrese 0 si el Ave es Carnivora, " << "\n";
                    cout << "Ingrese 1 si el Ave es Herbivora: ";
                    cin >> tipoComida;

                    cout << "Ingrese 0 si es Salvaje, 1 si es de criadero, "
                         << "2 si es Doméstico: ";
                    cin >> habito;

                    cout << "Ingrese 0 si el Ave tiene ala Aerodinámica, " << "\n";
                    cout << "Ingrese 1 si el Ave tiene ala Eliptica, " << "\n";
                    cout << "Ingrese 2 si el Ave tiene ala Larga, " << "\n";
                    cout << "Ingrese 3 si el Ave tiene ala Ancha: ";
                    cin >> ala;

                    cout << "Ingrese 0 si en el Ave predominan plumas Primarias, " << "\n";
                    cout << "Ingrese 1 si en el Ave predominan plumas Secundarias, " << "\n";
                    cout << "Ingrese 2 si en el Ave predominan plumas Timoneras, " << "\n";
                    cout << "Ingrese 3 si en el Ave predominan plumas Coberteras, " << "\n";
                    cout << "Ingrese 4 si en el Ave predominan plumas Plumón: ";
                    cin >> pluma;

                    a.push_back( new Ave(nombre,sangre,color,tipoComida,habito,ala,pluma) );
                }
                break;

            case '3'://3. Agregar Reptil
                for(unsigned int var = 0 ; var < getMin(); ++var){
                    limpiarConsola();

                    cout << "Ingrese el nombre del reptil " << var+1 << ": ";
                    getline (cin >> std::ws, nombre);

                    cout << "Si el reptil es de sangre fria ingrese 0, 1 si es de sangre caliente: ";
                    cin >> sangre;

                    cout << "Ingrese el color del reptil: ";
                    getline (cin >> std::ws, color);

                    cout << "Ingrese 0 si el reptil es Carnivoro, " << "\n";
                    cout << "Ingrese 1 si el reptil es Herbivoro: ";
                    cin >> tipoComida;

                    cout << "Ingrese 0 si es Salvaje, 1 si es de criadero," << endl;
                    cout << "2 si es Doméstico: ";
                    cin >> habito;

                    cout << "Ingrese el número de dientes del reptil: ";
                    cin >> dientes;

                    r.push_back(new Reptil(nombre,sangre,color,tipoComida,habito,dientes));
                }
                break;

            case '4'://4. Listar animales
                limpiarConsola();

                cout << "____________________________________" << endl;
                cout << "____________________________________" << endl;
                cout << endl << "Mamiferos ingresados " << m.size() << "." << endl;
                for(auto mamiferos : m){
                    cout << "____________________________________" << endl;
                    cout << "Nombre: " << mamiferos->getNombre() << endl;

                    cout << "Sangre: " ;
                    if(mamiferos->getSangre())
                        cout << "Caliente" << endl;
                    else
                        cout << "Fría" << endl;

                    cout << "Color: " << mamiferos->getColorPelo() << endl;
                    cout << "Es: " << mamiferos->getTipoComida() << endl;
                    cout << "Hábito: " << mamiferos->getTipoHabito() << endl;
                    cout << "Extremidades: " << mamiferos->getExtremidades() << endl;
                }

                cout << "____________________________________" << endl;
                cout << "____________________________________" << endl;
                cout << endl<< "Aves ingresadas " << a.size() << "." << endl;
                for(auto aves : a){
                    cout << "____________________________________" << endl;
                    cout << "Nombre: " << aves->getNombre() << endl;
                    cout << "Sangre: " ;
                    if(aves->getSangre())
                        cout << "Caliente" << endl;
                    else
                        cout << "Fría" << endl;

                    cout << "Color: " << aves->getColorPlumas() << endl;
                    cout << "Es: " << aves->getTipoComida() << endl;
                    cout << "Hábito: " << aves->getTipoHabito() << endl;
                    cout << "Tipo de ala: " << aves->getAla() << endl;
                    cout << "Tipo de plumas: " << aves->getPluma() << endl;
                }

                cout << "____________________________________" << endl;
                cout << "____________________________________" << endl;
                cout << endl << "Reptiles ingresados " << a.size() << "." << endl;
                for(auto reptiles : r){
                    cout << "____________________________________" << endl;
                    cout << "Nombre: " << reptiles->getNombre() << endl;

                    cout << "Sangre: " ;
                    if(reptiles->getSangre())
                        cout << "Caliente" << endl;
                    else
                        cout << "Fría" << endl;

                    cout << "Color de escamas: " << reptiles->getColorEscamas() << endl;
                    cout << "Es: " << reptiles->getTipoComida() << endl;
                    cout << "Hábito: " << reptiles->getTipoHabito() << endl;
                    cout << "Número de dientes: " << reptiles->getDientes() << endl;
                }

                cout << "Digite enter para continuar";
                getchar();
                break;

            case '5'://5. Salir del programa
                limpiarConsola();
                cout << "Fin del programa." << endl;
                pausa(1);
                break;

            default://Respuesta por defecto en caso de error
                limpiarConsola();
                cout << "ha ingresado una opción no valida, intente de nuevo" << endl;
                pausa(2);
                break;
        }

    }

}

