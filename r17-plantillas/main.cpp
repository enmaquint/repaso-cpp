#include <iostream>
#include <string>
#include "arreglo.hpp"

int main() {
    Arreglo<double> d(3);
    d[0] = 1.5; d[1] = 2.5; d[2] = 3.5;
    Arreglo<double> d2 = d;
    d2[0] = 99.9;
    std::cout << "d[0]=" << d[0] << " d2[0]=" << d2[0] << '\n';

    Arreglo<std::string> s(2);
    s[0] = "hola"; s[1] = "mundo";
    Arreglo<std::string> s2 = s;
    s2[0] = "adios";
    std::cout << "s[0]=" << s[0] << " s2[0]=" << s2[0] << '\n';
}
