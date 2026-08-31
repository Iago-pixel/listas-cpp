#include <iostream>

long long perimetro(long long l1, long long l2) {
  long long p = 2 * (l1 + l2);
  return p;
}

int main() {
  long long l1, l2;
  std::cin >> l1 >> l2;
  long long p = perimetro(l1, l2);
  std::cout << p << std::endl;
  return 0;
}

/*
Os tipos dos números inteiros utilizados no código são long long para permitir o cálculo do perímetro para valores até 10^9

l1=2 l2=3 p=10
l1=10 l2=20 p=60
l1=100 l2=200 p=600
l1=1000000000 l2=1000000000 p=4000000000
l1=1000000000 l2=2000000000 p=6000000000
*/