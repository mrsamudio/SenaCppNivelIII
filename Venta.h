#ifndef VENTA_H
#define VENTA_H


class Venta
{
public:
    Venta(){}
    Venta(int id, int mes, unsigned long valor, int idVendedor);

    inline void setId(int id){this->id = id;}
    inline unsigned long getId(){return this->id;}

    inline void setMes(int mes){this->mes = mes;}
    inline int getMes(){return this->mes;}

    inline void setValor(int valor){this->valor = valor;}
    inline int getValor(){return this->valor;}

    inline void setIdVendedor( int idVendedor){this->idVendedor = idVendedor;}
    inline int getIdVendedor(){return idVendedor;}

    ~Venta(){}

private:
    int id;
    int mes;
    int valor;
    int idVendedor;
};

#endif // VENTA_H
