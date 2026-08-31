#include <iostream>

int main() {
    int n;
    std::cin >> n;
    long long a[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    long long soma_maiores = a[0] + a[1];
    for (int i = 2; i < n; ++i) {
        long long soma_consecutivos = a[i-1] + a[i];
        if (soma_maiores < soma_consecutivos) {
            soma_maiores = soma_consecutivos;
        }
    }
    std::cout << "Valor da maior soma de dois números consecutivos: " << soma_maiores << std::endl;
}