//
// Created by lonix on 30/09/2025.
//

#ifndef CARRITO_H
#define CARRITO_H

#include <vector>
#include "Producto.h"
using namespace std;

class Carrito {
private:
    vector<Producto> productos;

public:
    void agregarProducto(const Producto &producto);
    void eliminarProducto(int id);
    void mostrarContenido() const;
    double calcularTotal() const;
};

#endif