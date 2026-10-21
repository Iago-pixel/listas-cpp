#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(-1000000, 1000000);

    for(int i = 100; i <= 1000; i += 100) {
        std::cout << i << " ";
        for(int j = 0; j < i; j++) {
            std::cout << distrib(gen) << " ";
        }
        if(i != 1000) {
            std::cout << "\n";
        }
    }

    return 0;
}