#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    int t;
    
    while( std::cin >> t ){
        vec.push_back(t);
    }
    
    for(int i = vec.size() - 1; i >= 0; i--){
        std::cout << vec[i] << " ";
    }
    
    return 0;
}
