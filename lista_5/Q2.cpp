#include <iostream>

int repete[100001];
int main() {
    int n;
    std::cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for(int i = 0; i < 100001; i++) {
        repete[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        repete[a[i]]++;
    }

    for(int i = 0; i < 100001; i++) {
        if(repete[i] != 0) {
            std::cout << i << " repete " << repete[i] << " vezes!" << std::endl;
        }
    }
}