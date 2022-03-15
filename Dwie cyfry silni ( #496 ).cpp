#include <iostream>
#include <string>

std::string factorial (unsigned& n){
    if( n <= 1 ){
        return "0 1";
    }else if( n >= 10 ){
        return "0 0";
    }else{
        for( unsigned i = n - 1; i > 1; i-- ){
            n *= i;
        }
        std::string str = "";
        str += std::to_string(n % 100 / 10) + " " + std::to_string(n % 10);
        return str;
    }
}

int main()
{
    unsigned short D;
    std::cin >> D;
    unsigned n;
    
    
    for(unsigned short i = 0; i < D; i++){
        std::cin >> n;
        std::cout << factorial(n) << "\n";
    }
    
    return 0;
}
