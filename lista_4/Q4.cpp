#include <iostream>
#include <chrono>
#include <random>

int tamanho_maior_sequencia_nd(int a[], int n) {
    int maior_sequencia = 0, sequencia_atual = 1;
    for(int i = 1; i < n; i++) {
        if(a[i] >= a[i-1]) {
            sequencia_atual++;
        } else {
            if(sequencia_atual > maior_sequencia) {
                maior_sequencia = sequencia_atual;
            }
            sequencia_atual = 1;
        }
    }
    return maior_sequencia;
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
    int maior_sequencia = tamanho_maior_sequencia_nd(a, n);
    // Fim do cronômetro
    auto end = std::chrono::high_resolution_clock::now();

    auto dur = end - beg; // Duração do cronômetro
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);

    std::cout << maior_sequencia << std::endl;

    std::cerr << "Processing time: " << duration.count() << " microseconds(s)" << std::endl;

    return 0;
}