#include <iostream>

bool eh_ordenado(int a[], int n) {
    for (int i = 1; i < n; i++) {
        if (a[i - 1] > a[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    std::cout << "Tamanho do array: ";
    int n;
    std::cin >> n;
    std::cout << "Digite os " << n << " inteiros:" << std::endl;
    int a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    if (eh_ordenado(a, n)) {
        std::cout << std::endl << "É ordenado!" << std::endl;
    } else {
        std::cout << std::endl << "Não é ordenado!" << std::endl;
    }
    return 0;
}