#include <iostream>

struct fracao {
  int numerador;
  int denominador;
};

int mmc(int x, int y) {
  int m = x;
  while (1) {
    if (m % y == 0){
      break;
    }
    m += x;
  }
  return m;
}

int mdc(int x, int y) {
  int d = x;
  while (1) {
    if (x % d == 0 and y % d == 0) {
      break;
    }
    d--;
  }
  return d;
}

fracao soma(fracao& f1, fracao& f2) {
  fracao f3;
  int m = mmc(f1.denominador, f2.denominador);
  f3.numerador = (f1.numerador * (m / f1.denominador)) + (f2.numerador * (m / f2.denominador));
  f3.denominador = m;
  return f3;
}

fracao simplificar(fracao f) {
  int m = mdc(f.numerador, f.denominador);
  f.numerador = f.numerador / m;
  f.denominador = f.denominador / m;
  return f;
}

int main() {
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;
  fracao f1, f2, f3;
  f1.numerador = a;
  f1.denominador = b;
  f2.numerador = c;
  f2.denominador = d;
  f3 = soma(f1, f2);
  std::cout << f3.numerador << "/" << f3.denominador << std::endl;
  f3 = simplificar(f3);
  std::cout << f3.numerador << "/" << f3.denominador << std::endl;
  return 0;
}