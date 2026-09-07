class Arreglo {
public:
    Arreglo(int n) : n_(n), datos_(new int[n]) {}
    Arreglo(const Arreglo& o);
    Arreglo& operator=(const Arreglo& o);
    ~Arreglo() { delete[] datos_; }
private:
    int n_;
    int* datos_;
};
