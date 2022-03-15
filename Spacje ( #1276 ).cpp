#include <iostream>
#include <stdio.h>
#include <cctype>
#include <string>

int main(){
    
    std::string text, newText = "";

    while ( std::getline(std::cin, text) ) {
        newText = "";
        for ( unsigned i = 0; i < text.size(); i++ ) {
            if ( isspace(text[i]) ) {
                i++;
                while ( isspace(text[i]) ) {
                    if ( text[i] == '\0' ) {
                        std::cout << newText << '\n';
                        return 0;
                    }
                    i++;
                }
                newText += toupper(text[i]);
            }
            else {
                newText += text[i];
            }
        }

        std::cout << newText << '\n';
    }
  
}

 