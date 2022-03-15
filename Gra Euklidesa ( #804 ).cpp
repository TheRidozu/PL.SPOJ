#include <iostream>

int main() {

    int t, a, b;

    std::cin >> t;

    for (int i = 0; i < t; i++) {
        std::cin >> a >> b;

        while (a != b) {
            if (a > b) {
                a -= b;
            }
            else {
                b -= a;
            }
        }
        std::cout << a + b << '\n';
    }

}


