#include <iostream>

int sumOfArray(const int* t, const unsigned& n) {
    int sum = 0;
    
    for (unsigned int i = 0; i < n; i++) {
        sum += t[i];
    }

    return sum;
}

int main(){
    unsigned t;
    unsigned n;
    int* tab = nullptr;

    std::cin >> t;

    for ( unsigned i = 0; i < t; i++ ) {
        std::cin >> n;

        tab = new int[n];

        for (unsigned i = 0; i < n; i++) {
            std::cin >> tab[i];
        }

        std::cout << sumOfArray(tab, n) << "\n";

        delete[] tab;
        tab = nullptr;

    }
}

