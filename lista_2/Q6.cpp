#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

struct cordenada {
    double x, y;
};

double distancia_entre_pontos(cordenada a, cordenada b) {
    double dx = a.x - b.x;
    double dy = a.y - b.y;

    return std::sqrt(dx * dx + dy * dy);
}

double menor_distancia(const std::vector<cordenada>& pontos, int n) {
    double d_tmp, d = distancia_entre_pontos(pontos[0], pontos[1]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                d_tmp = distancia_entre_pontos(pontos[i], pontos[j]);
                if (d_tmp < d) {
                    d = d_tmp;
                }
            }
        }
    }
    return d;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<cordenada> pontos(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> pontos[i].x >> pontos[i].y;
    }
    double distancia = menor_distancia(pontos, n);
    std::cout << std::fixed << std::setprecision(4) << distancia << std::endl;
    return 0;
}