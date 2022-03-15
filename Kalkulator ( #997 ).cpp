#include <iostream>

int calc(char& signe, int& a, int& b) {
    if      ( signe == '-' ) { return a - b; }
    else if ( signe == '+' ) { return a + b; }
    else if ( signe == '*' ) { return a * b; }
    else if ( signe == '/' ) { return a / b; }
    else if ( signe == '%' ) { return a % b; }
}

int main()
{
    char signe;
    int a, b;

    while (std::cin >> signe >> a >> b) {
        std::cout << calc(signe, a, b) << std::endl;
    }

    return 0;

}


