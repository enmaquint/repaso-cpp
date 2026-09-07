#include "punto.h"
#include <iostream>
#include <cmath>

Punto::Punto() : x(0), y(0) {
    std::cout << "Punto()\n";
}

Punto::Punto(double a, double b) : x(a), y(b) {
    std::cout << "Punto(" << a << "," << b << ")\n";
}

Punto::~Punto() {
    std::cout << "~Punto(" << x << "," << y << ")\n";
}

double Punto::distanciaAlOrigen() const {
    return std::sqrt(x * x + y * y);
}

void Punto::imprimir() const {
    std::cout << "(" << x << ", " << y << ")\n";
}
