//
// Created by lonix on 30/09/2025.
//

#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Carrito.h"
using namespace std;

class Cliente {
private:
    string nombre;
    Carrito carrito;

public:
    Cliente(string nombre);
    string getNombre() const;
    Carrito& getCarrito();
};

#endif