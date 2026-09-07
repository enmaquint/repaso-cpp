#include <iostream>
#include <string>

class Sesion {
public:
    Sesion() : nombre("sin nombre"), nivel(0) {
        std::cout << "Sesion(" << nombre << ")\n";
    }
    Sesion(const std::string& n) : nombre(n), nivel(0) {
        std::cout << "Sesion(" << nombre << ")\n";
    }
    Sesion(const std::string& n, int lvl) : nombre(n), nivel(lvl) {
        std::cout << "Sesion(" << nombre << ", " << nivel << ")\n";
    }
    ~Sesion() {
        std::cout << "~Sesion(" << nombre << ")\n";
    }
private:
    std::string nombre;
    int nivel;
};

Sesion global("global");

int main() {
    Sesion a("a");
    {
        Sesion b("b");
        Sesion c("c", 2);
    }
    std::cout << "--- medio ---\n";
    Sesion d;
}
