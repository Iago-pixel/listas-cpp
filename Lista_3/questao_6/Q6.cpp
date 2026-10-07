#include <iostream>
#include <chrono>

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

    bool p = true;
    for(long long d = 3; p && d <= n/2; d += 2) {
        if(n % d == 0) {
            p = false;
        }
    }
    return p;
}

int main() {
    long long n;
    std::cin >> n;

    auto beg = std::chrono::high_resolution_clock::now();
    bool p = prime(n);
    auto end = std::chrono::high_resolution_clock::now();

    if(p) {
        std::cout << n << " é primo!" << std::endl;
    } else {
        std::cout << n << " não é primo!" << std::endl;
    }

    auto dur = end - beg;
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);
    std::cerr << duration.count() << std::endl;

    return 0;
}