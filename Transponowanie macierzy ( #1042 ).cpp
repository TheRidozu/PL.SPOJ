#include <iostream>

int main(){
    unsigned short m = 0, n = 0;

    std::cin >> m >> n;
    
    int** matrix = new int* [m];

    for (unsigned short i = 0; i < m; i++) {
        matrix[i] = new int[n];
    }

    for (unsigned short i = 0; i < m; i++) {
        for (unsigned short j = 0; j < n; j++) {
            std::cin >> matrix[i][j];
        }
    }

    for (unsigned short i = 0; i < n; i++) {
        for (unsigned short j = 0; j < m; j++) {
            std::cout << matrix[j][i] << " ";
        }
        std::cout << "\n";
    }

}

