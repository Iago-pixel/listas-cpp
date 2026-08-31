#include <iostream>
#include <iomanip>
#include <windows.h>

double raiz(double n) {
  double r1 = n / 2;
  while (1) {
    double r2 = (r1 + n/r1) / 2;
    if (r1 - r2 < 0.001) {
      break;
    }
    r1 = r2;
  }
  return r1;
}

int main() {
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  double n;
  std::cin >> n;
  std::cout << "A raiz de " << n << " é " << std::fixed << std::setprecision(3) << raiz(n) << std::endl;  
}