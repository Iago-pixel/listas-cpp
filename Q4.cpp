#include <iostream>
#include <windows.h>

int main() {
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  int m, p;
  std::cin >> m >> p;
  int n_postes = (m / p) + 1;
  int distancia_entre_ultimos = p;
  if (m % p != 0) {
    distancia_entre_ultimos = m % p;
    n_postes++;
  }
  std::cout << "Número de postes é " << n_postes << std::endl;
  std::cout << "Distancia entre os dois ultimos postes é " << distancia_entre_ultimos;
  if (distancia_entre_ultimos == 1) {
    std::cout << " metro";
  } else {
    std::cout << " metros";
  }
  std::cout << std::endl;
}