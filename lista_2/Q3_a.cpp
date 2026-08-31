#include <iostream>

void conta_pares(int a[], int n, int pares[], int& qtd_pares) {
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) {
            pares[qtd_pares] = a[i];
            qtd_pares = qtd_pares + 1;
        }
    }
}

int main() {
    int n, qtd_pares = 0;
    std::cin >> n;
    int a[n], pares[n]; // A quantidade máxima de pares é n
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    conta_pares(a, n, pares, qtd_pares);
    std::cout << qtd_pares << std::endl;
    if (qtd_pares > 0) {
        std::cout << pares[0];
        for (int i = 1; i < qtd_pares; ++i) {
            std::cout << " " << pares[i];
        }
    }
    std::cout << std::endl;
    return 0;
}