#include <iostream>
#include <string>

int main() {

    int start{}, end{};
    std::string str{};

    //while (std::getline(std::cin, str)) {
    //    for (int i = 0; str[i] != '\0'; i++) {
    //        if (str[i] == '<') {
    //            start = i;
    //            i++;
    //            while (str[i] != '>') {
    //                i++;
    //            }
    //            end = i;

    //            for (int j = start + 1; j < end; j++) {
    //                if (97 <= (int)str[j] && (int)str[j] <= 122) {
    //                    str[j] = char(str[j] - 32);
    //                }
    //            }
    //        }
    //    }
    //    std::cout << str << '\n';
    //}

    //Code after refactoring:

    //while (std::getline(std::cin, str)) {
    //    for (int i = 0; str[i] != '\0'; i++) {
    //        if (str[i] == '<') {       
    //            do {
    //                i++;
    //                if (97 <= (int)str[i] && (int)str[i] <= 122) {
    //                    str[i] = char(str[i] - 32);
    //                }
    //            } while (str[i] != '>');
    //        }
    //    }
    //    std::cout << str << '\n';
    //}
    // Second refactoring:

    while (std::getline(std::cin, str)) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == '<') {
                do {
                    i++;
                    str[i] = std::toupper(str[i]);
                } while (str[i] != '>');
            }
        }
        std::cout << str << '\n';
    }
}

