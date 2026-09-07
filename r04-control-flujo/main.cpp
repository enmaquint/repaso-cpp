#include <iostream>

int main() {
    const int N = 5;
    int d[N] = {10, 20, 30, 40, 50};

    int suma = 0; 
    for (int i = 0; i < N; i++) //recore i desde 0 a 4 porque N=5 y 5 es el limite porque no existe, en cada suma va sumando el valor de d[i] a suma
        suma += d[i];

    int cuantos = 0; 
    for (int i = 0; i < N; i++)     //recore i desde 0 a 4, y si d(i) es mayor que 25, "cuantos" se incrementa en 1
        if (d[i] > 25) cuantos++;

    int k = 0; 
    while (k < N) {
        std::cout << d[k] << ' '; //mientras k sea menor que 5 imprime d[k] y luego k++ avanza el contador una posición
        k++;
    }
    std::cout << '\n';

    std::cout << "suma=" << suma << " cuantos=" << cuantos << '\n';
}
