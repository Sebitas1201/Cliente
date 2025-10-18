#include <iostream>

#include <iostream>
#include "Producto.h"
#include "Carrito.h"
#include "Cliente.h"
using namespace std;

int main() {
    // Crear productos
    Producto p1(1, "Laptop", 3500.0);
    Producto p2(2, "Mouse", 80.0);
    Producto p3(3, "Teclado", 120.0);
    Producto p4(4, "Audifonos", 200.0);

    // Crear cliente con carrito
    Cliente cliente("Valeria");

    cout << "Cliente: " << cliente.getNombre() << "\n\n";

    // Agregar productos al carrito
    cliente.getCarrito().agregarProducto(p1);
    cliente.getCarrito().agregarProducto(p2);
    cliente.getCarrito().agregarProducto(p3);

    // Mostrar contenido inicial
    cliente.getCarrito().mostrarContenido();

    // Eliminar un producto
    cliente.getCarrito().eliminarProducto(2);

    // Mostrar contenido actualizado
    cliente.getCarrito().mostrarContenido();

    return 0;
}
