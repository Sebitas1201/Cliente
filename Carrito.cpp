//
// Created by lonix on 30/09/2025.
//

#include "Carrito.h"
#include <iostream>

void Carrito::agregarProducto(const Producto &producto) {
    productos.push_back(producto);
}

void Carrito::eliminarProducto(int id) {
    for (auto it = productos.begin(); it != productos.end(); ++it) {
        if (it->getId() == id) {
            productos.erase(it);
            cout << "Producto con ID " << id << " eliminado.\n";
            return;
        }
    }
    cout << "Producto con ID " << id << " no encontrado.\n";
}

void Carrito::mostrarContenido() const {
    cout << "Contenido del carrito:\n";
    for (const auto &producto : productos) {
        cout << " - " << producto.getNombre() << " ($" << producto.getPrecio() << ")\n";
    }
    cout << "Total: $" << calcularTotal() << "\n\n";
}

double Carrito::calcularTotal() const {
    double total = 0;
    for (const auto &producto : productos) {
        total += producto.getPrecio();
    }
    return total;
}
