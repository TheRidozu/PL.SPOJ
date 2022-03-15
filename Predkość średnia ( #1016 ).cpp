#include <iostream>

int main(){
    
    short v1,v2,t;
    
    std::cin>>t;
    
    for( short i = 0; i < t; i++ ){
        
        std::cin >> v1 >> v2;
        std::cout << 2 * v2 * v1 / ( v1 + v2 ) << "\n";
    }
    return 0;
}
