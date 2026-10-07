#include <iostream>
#include <chrono>
#include <random>

bool existe_soma(int a[], int n, int s) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] + a[j] == s) {
                return true;
            }
        }
    }
    return false;
}

void preencher_array(int a[], int n) {
    std::random_device rd;

    // Inicializa o motor Mersenne Twister com a semente
    std::mt19937 gen(rd());

    // Define o intervalo desejado (exemplo: de 1 até 10)
    std::uniform_int_distribution<> distrib(0, 100);

    for(int i = 0; i < n; i++) {
        a[i] = distrib(gen);
    }
}

int main() {
    int n, s;
    std::cin >> n;

    int a[n];
    preencher_array(a, n);

    s = 201;

    auto beg = std::chrono::high_resolution_clock::now();
    bool tem_soma = existe_soma(a, n, s);
    auto end = std::chrono::high_resolution_clock::now();

    if(tem_soma) {
        std::cout << "S" << std::endl;
    } else {
        std::cout << "N" << std::endl;
    }

    auto dur = end - beg;
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);
    std::cerr << duration.count() << std::endl;

    return 0;
}