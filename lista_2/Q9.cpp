#include <iostream>

int soma(int a[], int n, int inicio, int fim) {
    int soma = 0;
    for (int i = inicio; i <= fim; i++) {
        soma += a[i];
    }
    return soma;
}

int main() {
    int n;
    std::cout << "Tamanho do array: ";
    std::cin >> n;
    int a[n];
    std::cout << "Digite os " << n << " inteiros:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    int s_atual, inicio = 0, fim = 1, tamanho_da_subsequencia = 1, s = a[0] + a[1];
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            s_atual = soma(a, n, i, j);
            if (s_atual >= s) {
                if (s_atual == s) {
                    if (j - i > tamanho_da_subsequencia) {
                        s = s_atual;
                        tamanho_da_subsequencia = j - i;
                        inicio = i;
                        fim = j;
                    }
                } else {
                    s = s_atual;
                    tamanho_da_subsequencia = j - i;
                    inicio = i;
                    fim = j;
                }
            }
        }
    }
    std::cout << "Maior sublista com maior soma: ";
    for (int i = inicio; i <= fim; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}