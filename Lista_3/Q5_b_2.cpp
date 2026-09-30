#include <iostream>

bool prime(long long n) {
    if(n == 1) {
        return false;
    }
    if(n == 2) {
        return true;
    }
    if(n % 2 == 0) {
        return false;
    }
    int q_divs = 1;
    for(int i = 3; i <= n/2; i += 2) {
        if(n % i == 0) {
            q_divs++;
        }
    }
    return q_divs == 1;
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
    return 0;
}