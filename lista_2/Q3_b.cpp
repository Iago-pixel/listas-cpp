#include <iostream>

void separar_positivos_negativos(int a[], int n, int positivos[], int negativos[], int& qtd_positivos, int& qtd_negativos) {
    for (int i = 0; i < n; ++i) {
        if (a[i] >= 0) {
            positivos[qtd_positivos] = a[i];
            qtd_positivos++;
        } else {
            negativos[qtd_negativos] = a[i];
            qtd_negativos++;
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    int positivos[n], negativos[n], qtd_positivos = 0, qtd_negativos = 0;
    separar_positivos_negativos(a, n, positivos, negativos, qtd_positivos, qtd_negativos);
    std::cout << "Quantidade de positivos = "<< qtd_positivos << std::endl << "Números positivos: " << positivos[0];
    for (int i = 1; i < qtd_positivos; ++i) {
        std::cout << " " << positivos[i];
    }
    std::cout << std::endl << "Quantidade de negativos = " << qtd_negativos << std::endl << "Números negativos: " << negativos[0];
    for (int i = 1; i < qtd_negativos; ++i) {
        std::cout << " " << negativos[i];
    }
    std::cout << std::endl;
}