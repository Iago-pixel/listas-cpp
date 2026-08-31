#include <iostream>

int maior_do_array(int a[], unsigned int n) {
    int resultado = a[0];
    for (unsigned int i = 1; i < n; ++i) {
        if (a[i] > resultado) {
            resultado = a[i];
        }
    }
    return resultado;
}

unsigned int indice_do_maior(int a[], unsigned int n) {
    int maior = a[0];
    unsigned int indice = 0;
    for (unsigned int i = 1; i < n; ++i) {
        if (a[i] > maior) {
                maior = a[i];
                indice = i;
        }
    }
    return indice;
}

unsigned int indice_do_menor(int a[], unsigned int n) {
    int menor = a[0];
    unsigned int indice = 0;
    for (unsigned int i = 1; i < n; ++i) {
        if (a[i] < menor) {
            menor = a[i];
            indice = i;
        }
    }
    return indice;
}

int main() {
    unsigned int n;
    std::cout << "Digite o tamanho do array" << std::endl;
    std::cin >> n;
    int a[n];
    std::cout << "Digite os valores dentro do array" << std::endl;
    for (unsigned int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    int maior = maior_do_array(a, n);
    unsigned int indice_maior = indice_do_maior(a, n);
    unsigned int indice_menor = indice_do_menor(a, n);
    std::cout << "Maior valor = " << maior << std::endl;
    std::cout << "Indice do maior valor = " << indice_maior << std::endl;
    std::cout << "Indice do menor valor = " << indice_menor << std::endl;
    return 0;
}