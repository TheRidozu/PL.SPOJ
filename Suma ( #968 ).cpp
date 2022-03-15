#include <iostream>

int main(){
    
	short a = 0, sum = 0;
	
    while( std::cin>>a ){
        sum += a;
        std::cout << sum << std::endl;
    }
    
}
