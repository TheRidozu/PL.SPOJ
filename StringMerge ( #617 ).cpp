#include <iostream>
#include <cstring>

#define T_SIZE 1001

// alternative for strlen function
int textLength(char* str) {
	int len = 0, i = 0;

	while (str[i] != ' ' && str[i] != '\0') {
		len++;
		i++;
	}
	return len;
}

char* string_merge(char* str1, char* str2) {

	int shorterSize = strlen(str1) > strlen(str2) ? strlen(str2) * 2 + 1 : strlen(str1) * 2 + 1;
	char* newStr = new char[shorterSize];

	newStr[shorterSize - 1] = '\0';

	for (int i = 0; i < shorterSize - 1; i++) {
		newStr[i] = i % 2 == 0 ? str1[i / 2] : str1[i / 2 + 1];
		i++;
		newStr[i] = i % 2 == 0 ? str2[i / 2 - 1] : str2[i / 2];
	}

	return newStr;
}



int main() {
	int t;
	char S1[T_SIZE],
		S2[T_SIZE],
		* S = nullptr;
	std::cin >> t;
	std::cin.getline(S1, T_SIZE);
	while (t) {
		std::cin.getline(S1, T_SIZE, ' ');
		std::cin.getline(S2, T_SIZE);
		S = string_merge(S1, S2);
		std::cout << S << std::endl;
		delete[] S;
		t--;
	}
	return 0;
}

