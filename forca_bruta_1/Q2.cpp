#include <iostream>
#include <chrono>

bool tem_soma_s(int a[], int n, int s) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] + a[j] == s) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int n, s;
    std::cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::cin >> s;

    auto inicio = std::chrono::high_resolution_clock::now();
    bool condicao_ter_soma = tem_soma_s(a, n, s);
    auto fim = std::chrono::high_resolution_clock::now();

    if(condicao_ter_soma) {
        std::cout << "S" << std::endl;
    } else {
        std::cout << "N" << std::endl;
    }

    auto duracao = fim - inicio;
    auto pegar_duracao = std::chrono::duration_cast<std::chrono::microseconds>(duracao);

    std::cerr << pegar_duracao.count() << std::endl;

    return 0;
}