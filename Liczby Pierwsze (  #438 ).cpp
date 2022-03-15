#include <iostream>
#include <cmath>

std::string is_primary(short int& number){
    if( number == 1 ) return "NIE";
    for( int i = 2; i <= sqrt(number); i++ ){
        if( number % i == 0 ){
            return "NIE";
        }
    }
    return "TAK";
}

int main(){
    
    int n = 0;
    short num = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> num;
        std::cout << is_primary(num) << "\n";
    }
    
    return 0;
}
