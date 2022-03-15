#include <iostream>

int main() {
    int n{};

    std::cin >> n;

    if (n <= 2 && n != 0) {
        std::cout << "NIE";
    }
    else if (n == 0) {
        std::cout << "0";
    }
    else if (n == 3) {
        std::cout << "2 0 3 1";

    }
    else if (n == 4) {
        std::cout << "0 2 4 1 3";
    }
    else {
        for (int i = 0; i <= n; i++) {
            if (i % 2 == 0) {
                std::cout << i << " ";
            }
        }
        for (int i = 0; i <= n; i++) {
            if (i % 2 != 0) {
                std::cout << i << " ";
            }
        }
    }
    std::cout << std::endl;
}
