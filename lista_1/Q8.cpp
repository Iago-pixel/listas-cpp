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
  int mdc;
  for(int i = menor(a, b); i > 0; i--) {
    if(a % i == 0 and b % i == 0) {
      mdc = i;
      break;
    }
  }
  std::cout << "O MDC de " << a << " e " << b << " é " << mdc << std::endl;
  return 0;
}