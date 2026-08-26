#include <iostream>
#include <iomanip>

double area_circulo(double r) {
  double area = 3.14159 * r * r;
  return area;
}

int main() {
  double d;
  std::cin >> d;
  double r = d / 2.0;
  double area = area_circulo(r);
  std::cout << std::fixed << std::setprecision(5) << area << std::endl;
  return 0;
}

/*
d=1.00000 area=0.78540
d=10.00000 area=78.53975
d=50000.00000 area=1963493750.00000
d=100000.00000 area=7853975000.00000
d=200000.00000 area=31415900000.00000
d=1.56780 area=1.93050
d=123.45678 area=11970.69610
d=12345678.87654 area=119706978009578.81250
d=2000000000.88888 area=3141590002792496640.00000
*/