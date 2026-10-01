#include <iostream>
#include <chrono>
#include <random>

int maior_soma(int a[], int n) {
    int soma = a[0] + a[1];
    for(int i = 2; i < n; i++) {
        int soma_atual = a[i-1] + a[i];
        if(soma < soma_atual) {
            soma = soma_atual;
        }
    }
    return soma;
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
    int n;
    std::cin >> n;

    int a[n];
    preencher_array(a, n);

    // Inicio do cronômetro
    auto beg = std::chrono::high_resolution_clock::now();
    int soma = maior_soma(a, n);
    // Fim do cronômetro
    auto end = std::chrono::high_resolution_clock::now();

    auto dur = end - beg; // Duração do cronômetro
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);

    std::cout << "A maior soma de valores consecutivos é: " << soma << std::endl;

    std::cerr << "Processing time: " << duration.count() << " microseconds(s)" << std::endl;

    return 0;
}