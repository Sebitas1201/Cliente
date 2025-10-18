//
// Created by lonix on 30/09/2025.
//

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using namespace std;

class Producto {
private:
    int id;
    string nombre;
    double precio;

public:
    Producto(int id, string nombre, double precio);
    int getId() const;
    string getNombre() const;
    double getPrecio() const;
};

#endif
