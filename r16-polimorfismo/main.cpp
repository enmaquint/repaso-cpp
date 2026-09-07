#include <iostream>
#include <vector>
#include <string>

class Figura {
public:
    virtual double area() const = 0;
    virtual std::string nombre() const = 0;
    virtual ~Figura() = default;
};

class Circulo : public Figura {
public:
    Circulo(double r) : r_(r) {}
    double area() const override { return 3.14159 * r_ * r_; }
    std::string nombre() const override { return "Circulo"; }
private:
    double r_;
};

class Rectangulo : public Figura {
public:
    Rectangulo(double a, double b) : a_(a), b_(b) {}
    double area() const override { return a_ * b_; }
    std::string nombre() const override { return "Rectangulo"; }
private:
    double a_, b_;
};

int main() {
    std::vector<Figura*> figs;
    figs.push_back(new Circulo(1.0));
    figs.push_back(new Rectangulo(3.0, 4.0));

    double total = 0.0;
    for (const Figura* f : figs) {
        std::cout << f->nombre() << ": " << f->area() << '\n';
        total += f->area();
    }
    std::cout << "total: " << total << '\n';

    for (Figura* f : figs) delete f;
}
