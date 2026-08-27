#include <iostream>

int n_divisores(int n) {
  int divs;
  divs = 0;
  for(int i = 1; i < n; i++) {
    if (n % i == 0) {
      divs = divs + 1;
    }
  }
  return divs;
}

int main() {
  int n;
  std::cin >> n;
  int divs = n_divisores(n);
  std::cout << "Número de divisores de " << n << " é " << divs << std::endl; 
}

/*
TESTES
n=10 divs=3 OK
n=7 divs=1 OK
n=77 divs=3 OK
*/