#include <iostream>

int main() {
    int n;
    std::cout << "Tamanho do Array: ";
    std::cin >> n;
    int a[n];
    std::cout << std::endl << "Escreva os " << n << " inteiros:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::cout << std::endl << "Escreva a soma s: ";
    int s, s_atual;
    std::cin >> s;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                s_atual = a[i] + a[j];
                if (s_atual == s) {
                    std::cout << std::endl << a[i] << " + " << a[j] << " = " << s << "!" << std::endl;
                    return 0;
                }
            }
        }
    }
    std::cout << std::endl << "Não há dois valores que somados sejam " << s << "!" << std::endl;
    return 0;
}