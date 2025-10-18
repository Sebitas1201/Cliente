//
// Created by lonix on 30/09/2025.
//

#include "Producto.h"

Producto::Producto(int id, string nombre, double precio)
    : id(id), nombre(nombre), precio(precio) {}

int Producto::getId() const { return id; }
string Producto::getNombre() const { return nombre; }
double Producto::getPrecio() const { return precio; }


