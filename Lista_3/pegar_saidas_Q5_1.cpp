#include <chrono>
#include <iostream>
#include <fstream>

bool prime(long long n) {
    int divs = 0;
    for(long long i = 1; i <= n/2; i++) {
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
    std::ofstream myfile;
    myfile.open("saidas2.txt");

    for (int i = 0; i < 42; i++) {
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