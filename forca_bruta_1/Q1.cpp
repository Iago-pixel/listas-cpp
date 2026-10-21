#include <iostream>

bool duas_fotos_eh_possivel(int x, int y, int l1, int h1, int l2, int h2) {
    if(l1 + l2 <= x && h1 + h2 <= y) {
        return 1;
    }
    if(h1 + l2 <= x && l1 + h2 <= y) {
        return 1;
    }
    if(l1 + h2 <= x && h1 + l2 <= y) {
        return 1;
    }
    if(h1 + h2 <= x && l1 + l2 <= y) {
        return 1;
    }
    return 0;
}

int main() {
    int x, y, l1, l2, h1, h2;

    std::cin >> x >> y;
    std::cin >> l1 >> h1;
    std::cin >> l2 >> h2;

    bool cabe_duas_fotos = duas_fotos_eh_possivel(x, y, l1, h1, l2, h2);

    if(cabe_duas_fotos) {
        std::cout << "S" << std::endl;
    } else {
        std::cout << "N" << std::endl;
    }

    return 0;
}