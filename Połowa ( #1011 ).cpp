#include <iostream>
#include <string>

int main(){

    short unsigned t{0};
    std::string str{""};
    
    std::cin >> t;
    
    for( short unsigned i = 0; i < t; i++ ){
        std::cin >> str;
        
        for( short unsigned int i = 0; i < str.size() / 2; i++ ){
            std::cout << str[i];
        }
        
        std::cout << std::endl;
    }

    return 0;
}
