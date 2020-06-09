#ifndef PROMEDIOS_H
#define PROMEDIOS_H


class Promedios
{
public:
    Promedios(){}

    /**
     * @brief promedio por Vendedor
     * @param numerador
     * @param meses
     * @return
     */
    double proVendedor(unsigned long numerador, int meses){
        return numerador/meses;
    }

    double proTodos(double proVendedor, int vendedores){
        return proVendedor/vendedores;
    }


    ~Promedios(){}
};



#endif // PROMEDIOS_H
