#include <iostream>
#include <string>

std::string changeString(std::string& str){
    
    std::string newStr = "";
    unsigned counter = 1;
    char t = str[0];
    
    for(unsigned i = 1; str[i] != '\0'; i++){
        if(t != str[i]){
            if(counter > 2){
                newStr += t + std::to_string(counter);
            }else{
                for(unsigned i = 0; i < counter; i++){
                    newStr += t;
                }
            }
            
            t = str[i];
            counter = 1;
        }else{
            counter++;
        }
    }
    
      if(counter > 2){
                newStr += t + std::to_string(counter);
            }else{
                for(unsigned int i = 0; i < counter; i++){
                    newStr += t;
                }
    }
    
    return newStr;
}

int main()
{
    std::string str;
    unsigned D;
    
    std::cin >> D;
    
    for(unsigned i = 0; i < D; i++){
        std::cin >> str;
        std::cout << changeString(str) << "\n";
    }
    
    return 0;
}
