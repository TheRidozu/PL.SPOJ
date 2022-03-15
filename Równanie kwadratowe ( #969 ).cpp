#include <iostream>

int main(){

    float A, B, C, delta;

    while ( std::cin >> A >> B >> C ) {
        delta = B * B - 4 * A * C;
        if ( delta > 0 ) {
            std::cout << 2;
        }
        else if ( delta == 0 ) {
            std::cout << 1;
        }
        else {
            std::cout << 0;
        }
        std::cout << '\n';
    }
}
