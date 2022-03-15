#include <iostream>
#include <cmath>

double tabAvg(short unsigned* tab, const short unsigned& n) {
    double avg = 0;

    for ( short unsigned i = 0; i < n; i++ ) {
        avg += tab[i];
    }

    return avg / n;
}

short unsigned nearestNumber(short unsigned* tab, const short unsigned& n, double avg) {
    short unsigned min_index = 0;

    if ( !fabs(avg - tab[min_index]) ) { return tab[min_index]; }

    for ( short unsigned i = 1; i < n; i++ ) {
        if ( fabs(avg - tab[min_index]) > fabs(avg - tab[i]) ) {
            min_index = i;
            if ( !fabs(avg - min_index) ) { return tab[min_index]; }
        }
    }
    return tab[min_index];
}

int main(){

    short unsigned t = 0, n = 0, *tab = nullptr;


    std::cin >> t;

    for ( short unsigned i = 0; i < t; i++ ) {
        std::cin >> n;

        tab = new short unsigned int[n];

        for ( short unsigned i = 0; i < n; i++ ) {
            std::cin >> tab[i];
        }

        std::cout << nearestNumber(tab, n, tabAvg(tab, n)) << '\n';

        delete[] tab;
        tab = nullptr;

    }

}


