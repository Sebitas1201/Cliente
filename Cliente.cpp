//
// Created by lonix on 30/09/2025.
//

#include "Cliente.h"

Cliente::Cliente(string nombre) : nombre(nombre) {}

string Cliente::getNombre() const { return nombre; }
Carrito& Cliente::getCarrito() { return carrito; }
