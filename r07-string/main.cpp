#include <iostream>
#include <string>

int contarPalabras(const std::string& s) {
    int n = 0;
    bool dentro = false;
    for (char c : s) {
        if (c == ' ') {
            dentro = false;
        } else if (!dentro) {
            dentro = true;
            n++;
        }
    }
    return n;
}

std::string voltear(const std::string& s) {
    std::string r;
    for (std::size_t i = s.size(); i > 0; i--)
        r += s[i - 1];
    return r;
}

int main() {
    std::string s = "HOLA   PROFE   COMO    ESTA";
    std::cout << "palabras: " << contarPalabras(s) << '\n';
    std::cout << "volteada: " << voltear("StevenUniverseFuture") << '\n';
}
