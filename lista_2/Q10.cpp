#include <iostream>

int main() {
    std::cout << "Digite o tamanho do array: ";
    int n;
    std::cin >> n;
    std::cout << "Digite os " << n << " inteiros: ";
    int a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    int c = 0;
    for (int i = 0, r = 0; i < n; i++) {
        for (int j = 0; j < c; j++) {
            if (i != j) {
                if (a[i] == a[j]) {
                    r++;
                }
            }
        }
        if (r == 0) {
            c++;
        }
    }
    std::cout << "Quantidade de números distintos: " << c << "!" << std::endl;
}