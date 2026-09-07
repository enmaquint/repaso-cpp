#include <iostream>

void intercambiar1(int a, int b) {
    int t = a; a = b; b = t;
}

void intercambiar2(int* a, int* b) {
    int t = *a; *a = *b; *b = t;
}

void intercambiar3(int& a, int& b) {
    int t = a; a = b; b = t;
}

int main() {
    int x = 1, y = 2;

    intercambiar1(x, y);
    std::cout << "por valor:      x=" << x << " y=" << y << '\n';

    intercambiar2(&x, &y);
    std::cout << "por puntero:    x=" << x << " y=" << y << '\n';

    intercambiar3(x, y);
    std::cout << "por referencia: x=" << x << " y=" << y << '\n';
}
