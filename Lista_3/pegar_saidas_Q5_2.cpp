#include <chrono>
#include <iostream>
#include <fstream>

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
    for(long long i = 3; i <= n/2; i += 2) {
        if(n % i == 0) {
            q_divs++;
        }
    }
    return q_divs == 1;
}

int main() {
    std::ofstream myfile;
    myfile.open("saidas3.txt");

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
    
    myfile.close();

    return 0;
}