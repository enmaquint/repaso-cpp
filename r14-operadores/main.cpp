#include <iostream>
#include <numeric>

class Fraccion {
public:
    Fraccion(int n = 0, int d = 1) : num_(n), den_(d) { reducir(); }

    Fraccion operator+(const Fraccion& o) const;
    Fraccion operator*(const Fraccion& o) const;
    bool operator==(const Fraccion& o) const;
    bool operator<(const Fraccion& o) const;

    friend std::ostream& operator<<(std::ostream& os, const Fraccion& f);

private:
    int num_, den_;

    void reducir() {
        if (den_ < 0) { num_ = -num_; den_ = -den_; }
        int g = std::gcd(num_ < 0 ? -num_ : num_, den_);
        if (g != 0) { num_ /= g; den_ /= g; }
    }
};

Fraccion Fraccion::operator+(const Fraccion& o) const {
    return Fraccion(num_ * o.den_ + o.num_ * den_,
                     den_ * o.den_);       // el ctor reduce
}

Fraccion Fraccion::operator*(const Fraccion& o) const {
    return Fraccion(num_ * o.num_, den_ * o.den_);
}

bool Fraccion::operator==(const Fraccion& o) const {
    return num_ * o.den_ == o.num_ * den_;
}

bool Fraccion::operator<(const Fraccion& o) const {
    return num_ * o.den_ < o.num_ * den_;  // den_ > 0 siempre
}

std::ostream& operator<<(std::ostream& os, const Fraccion& f) {
    return os << f.num_ << '/' << f.den_;
}

int main() {
    std::cout << (Fraccion(1, 2) + Fraccion(1, 3)) << '\n';
    std::cout << Fraccion(6, -8) << '\n';
    std::cout << (Fraccion(1, 2) == Fraccion(2, 4)) << '\n';
    std::cout << (Fraccion(1, 3) < Fraccion(1, 2)) << '\n';
}
