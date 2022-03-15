#include <iostream>

unsigned howManysweets(unsigned& a, unsigned& b) {
    unsigned t = a > b ? a : b;

    while ( t % a != 0 || t % b != 0 ) {
        t++;
    }

    return t;

}

int main(){
    unsigned a, b, N;

    std::cin >> N;

    for (unsigned i = 0; i < N; i++) {
        std::cin >> a >> b;
        std::cout << howManysweets(a, b) << "\n";
    }

}
