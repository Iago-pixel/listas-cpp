#include <iostream>

bool eh_primo(int n) {
	int divs = 0;
	for(int i = 1; i <= n; i++) {
		if (n % i ==0) {
			divs++;
		}
	}
	return divs == 2;
}

int main() {
	int n;
	std::cin >> n;
	if(eh_primo(n)) {
		std::cout << "verdadeiro" << std::endl;
	} else {
		std::cout << "falso" << std::endl;
	}
	return 0; 
}