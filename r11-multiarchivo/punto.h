#ifndef PUNTO_H
#define PUNTO_H

class Punto {
public:
    Punto();
    Punto(double a, double b);
    ~Punto();
    double distanciaAlOrigen() const;
    void imprimir() const;
private:
    double x, y;
};

#endif
