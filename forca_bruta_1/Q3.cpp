#include <iostream>
#include <vector>
#include <chrono>

int soma_sublista(int a[], int n, int inicio, int n_elementos_somados) {
    int soma = 0;
    for(int i = inicio; i < inicio + n_elementos_somados; i++) {
        soma += a[i];
    }
    return soma;
}

std::vector<int> sublista_maior_soma(int lista[], int n) {
    int maior_soma = lista[0], indice_inicial, indice_final, soma_atual;

    for(int n_elementos_somados = 1; n_elementos_somados <= n; n_elementos_somados++) {
        for(int i = 0; i <= n - n_elementos_somados; i++) {
            soma_atual = soma_sublista(lista, n, i, n_elementos_somados);
            if(maior_soma <= soma_atual) {
                maior_soma = soma_atual;
                indice_inicial = i;
                indice_final = i + n_elementos_somados - 1;
            }
        }
    }

    int tam = indice_final - indice_inicial + 1;
    std::vector<int> sublista;
    for(int i = 0; i < tam; i++) {
        sublista.push_back(lista[indice_inicial + i]);
    }

    return sublista;
}

int main() {
    int n;
    std::cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    auto inicio = std::chrono::high_resolution_clock::now();
    std::vector<int> sublista = sublista_maior_soma(a, n);
    auto fim = std::chrono::high_resolution_clock::now();

    std::cout << sublista[0] << " ";
    for(int i = 1; i < sublista.size(); i++) {
        std::cout << " " << sublista[i];
    }
    std::cout << std::endl;

    auto duracao = fim - inicio;
    auto pegar_duracao = std::chrono::duration_cast<std::chrono::microseconds>(duracao);

    std::cerr << pegar_duracao.count() << std::endl;

    return 0;
}