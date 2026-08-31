#include <iostream>

int menor(int a, int b) {
  if (a < b) {
    return a;
  }
  return b;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  bool primos = 1;
  int n = menor(a, b);
  for(int i = 2; i <= n; i++) {
    if (a % i == 0 and b % i == 0) {
      primos = 0;
    }
  }
  if (primos) {
    std::cout << "verdadeiro" << std::endl;
  } else {
    std::cout << "falso" << std::endl;
  }
}