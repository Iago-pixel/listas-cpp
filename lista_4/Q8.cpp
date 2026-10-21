#include <iostream>

int main() {
    int infectados = 1, populacao, dias = 0;
    std::cin >> populacao;

    while(populacao > infectados) {
        infectados *= 2;
        dias++;
    }

    std::cout << dias << " dias." << std::endl;
}