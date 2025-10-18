cmake_minimum_required(VERSION 4.0)
project(Ejercicio2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ejercicio2 main.cpp
        Producto.cpp
        Producto.h
        Carrito.cpp
        Carrito.h
        Cliente.cpp
        Cliente.h)
