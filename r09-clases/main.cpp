#include <iostream>
#include <string>

class Reserva {
public:
    bool asignarPersonas(int p) {
        if (p < 1 || p > 20) return false;
        personas = p; return true;
    }
    bool asignarHorario(int ini, int fin) {   // los dos juntos
        if (ini < 0 || fin > 23 || ini >= fin) return false;
        horaInicio = ini; horaFin = fin; return true;
    }
private:
    std::string sala = "A1";
    int personas = 1;
    int horaInicio = 8, horaFin = 9;
};

int main() {
    Reserva r;
    std::cout << r.asignarPersonas(25) << '\n';    // 0, fuera de rango
    std::cout << r.asignarPersonas(10) << '\n';    // 1
    std::cout << r.asignarHorario(15, 10) << '\n'; // 0, inicio >= fin
    std::cout << r.asignarHorario(9, 11) << '\n';  // 1
}
