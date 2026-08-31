#include <iostream>

int soma(int a, int b) {
  int r = a + b;
  return r;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  int s = soma(a, b);
  std::cout << s << std::endl;
  return 0;
}

/*
a=10 b=20 soma=30
a=-10 b=10 soma=0
a=-2 b=-3 soma=-5
a=1000000000 b=1000000000 soma=2000000000
a=-1000000000 b=1000000005 soma=5
a=2000000000 b=1000000000 soma=-1294967296
a=-1212121212 b=-2987654321 soma=935362436

As cinco primeiras entradas dão respostas válidas porque a soma não ultrapassa o limite do tipo int. As duas últimas entradas dão respostas inválidas
porque a soma ultrapassa o limite do tipo int, causando overflow.
Para corrigir o problema, podemos usar o tipo long long no lugar do tipo int, que tem um limite maior e pode armazenar valores maiores sem causar overflow.
*/