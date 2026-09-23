#include <chrono>
#include <iostream>
#include <fstream>

bool prime(long long n) {
    int qty_divs = 0;
    for (long long d = 1; d <= n; ++d) {
        if (n % d == 0) {
            qty_divs++;
        }
    }
    return qty_divs == 2;
}

int main() {
    std::ofstream myfile;
    myfile.open("saida.txt");

    for (int i = 0; i < 40; i++) {
        long long n;
        std::cin >> n;

        // Inicio do cronômetro
        auto beg = std::chrono::high_resolution_clock::now();
        bool p = prime(n);
        // Fim do cronômetro
        auto end = std::chrono::high_resolution_clock::now();

        if (p) {
            std::cout << n << " is prime" << std::endl;
        } else {
            std::cout << n << " is not prime" << std::endl;
        }

        auto dur = end - beg; // Duração do cronômetro
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);
        std::cerr << n << " Processing time: "
                << duration.count() << " microseconds(s)" << std::endl;

        myfile << duration.count() << std::endl;
    }
    
    myfile.close();

    return 0;
}