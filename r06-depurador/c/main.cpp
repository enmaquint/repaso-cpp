#include <iostream>
int maximo(const int v[], int n) {
    int mejor = v[0];
    for (int i = 1; i < n; i++)
        if (v[i] > mejor) mejor = v[i];
    return mejor;
}
int main() {
    int v[5] = {1,2,3,4,5};
    std::cout << maximo(v, 5) << '\n';
}
