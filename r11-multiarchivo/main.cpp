#include "punto.h"
#include <iostream>

int main() {
    Punto a;
    Punto b(3.0, 4.0);
    b.imprimir();
    std::cout << "distancia: " << b.distanciaAlOrigen() << '\n';
}
