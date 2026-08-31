#include <iostream>

unsigned int contador_de_impares(int a[], unsigned int n) {
    unsigned int contador = 0;
    for (unsigned int i = 0; i < n; ++i) {
        if (a[i] % 2 != 0) {
            contador++;
        }
    }
    return contador;
}

int main() {
    std::cout << "Digite o tamanho do array" << std::endl;
    unsigned int n;
    std::cin >> n;
    int a[n];
    for (unsigned int i = 0; i < n; ++i) {
        int valor;
        std::cin >> valor;
        a[i] = valor;
    }
    unsigned int contador = contador_de_impares(a, n);
    std::cout << "Número de ímpares = " << contador << std::endl;
}