#include <iostream>
#include <string>

class Persona {
public:
    Persona(const std::string& n) : nombre_(n) {
        std::cout << "Persona(" << nombre_ << ")\n";
    }
    ~Persona() {
        std::cout << "~Persona\n";
    }
    std::string nombre() const { return nombre_; }
protected:
    std::string nombre_;
};

class Empleado : public Persona {
public:
    Empleado(const std::string& n, double s) : Persona(n), sueldo_(s) {
        std::cout << "Empleado\n";
    }
    ~Empleado() {
        std::cout << "~Empleado\n";
    }
protected:
    double sueldo_;
};

class Gerente : public Empleado {
public:
    Gerente(const std::string& n, double s, int e)
        : Empleado(n, s), equipo_(e) {
        std::cout << "Gerente\n";
    }
    ~Gerente() {
        std::cout << "~Gerente\n";
    }
private:
    int equipo_;
};

int main() {
    std::cout << "--- inicio ---\n";
    {
        Gerente g("Ana", 1000, 5);
    }
    std::cout << "--- fin ---\n";
}
