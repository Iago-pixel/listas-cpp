#include <iostream>
#include <iomanip>

float area_circulo(float r) {
  float area = 3.14159 * r * r;
  return area;
}

int main() {
  float d;
  std::cin >> d;
  float r = d / 2.0;
  float area = area_circulo(r);
  std::cout << std::fixed << std::setprecision(5) << area << std::endl;
  return 0;
}

/*
d=100000 area=0.78540
d=10.00000 area=78.53975
d=50000.00000 area=1963493760.00000
d=100000.00000 area=7853975040.00000
d=200000.00000 area=31415900160.00000
d=1.56780 area=1.93050
d=123.45678 area=11970.69629
d=12345678.87654 area=119706979663872.00000
d=2000000000.88888 area=3141590043823439872.00000
*/