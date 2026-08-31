#include <iostream>

bool eh_primo(int n) {
    for (int d = n / 2; d > 1; --d) {
        if (n % d == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    std::cin >> n;
    int a[n], qtd_primos = 0;
    for (int valor, i = 0; i < n; ++i) {
        std::cin >> valor;
        if (eh_primo(valor)) {
            a[qtd_primos] = valor;
            qtd_primos++;
        }
    }
    std::cout << "Quantidade de primos: " << qtd_primos << std::endl;
    if (qtd_primos > 0) {
        std::cout << "Números primos: " << a[0];
    }
    for (int i = 1; i < qtd_primos; ++i) {
        std::cout << " " << a[i];
    }
    std::cout << std::endl;
}