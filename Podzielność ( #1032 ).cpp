#include <iostream>

int main() {

    int t{}, n{}, x{}, y{};

    std::cin >> t;

    for (int i = 0; i < t; i++) {
        std::cin >> n >> x >> y;

        for (int i = 0; i < n; i++) {
            if (i % x == 0 && i % y != 0) {
                std::cout << i << " ";
            }
        }
        std::cout << "\n";
    }

}
    