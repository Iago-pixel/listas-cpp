#include <iostream>

bool prime(long long n) {
    int divs = 0;
    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0) {
            divs++;
        }
    }
    if(divs == 1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    std::cout << "VERIFICADOR DE PRIMO" << std::endl << "Digite o número: ";
    long long n;
    std::cin >> n;
    std::cout << n << " ";
    if(prime(n)) {
        std::cout << "é primo!" << std::endl;
    } else {
        std::cout << "não é primo!" << std::endl;
    }
}