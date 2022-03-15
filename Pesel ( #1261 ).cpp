#include <iostream>
#include <cmath>

char check_PESEL(const unsigned long long& n) {
	unsigned short sum = 0;
	sum = n % 10 +
		floor(n % 100 / 10) * 3 +
		floor(n % 1000 / 100) +
		floor(n % 10000 / 1000) * 9 +
		floor(n % 100000 / 10000) * 7 +
		floor(n % 1000000 / 100000) * 3 +
		floor(n % 10000000 / 1000000) +
		floor(n % 100000000 / 10000000) * 9 +
		floor(n % 1000000000 / 100000000) * 7 +
		floor(n % 10000000000 / 1000000000) * 3 +
		floor(n % 100000000000 / 10000000000);
	if ( sum > 0 && sum % 10 == 0 ) {
		return 'D';
	}
	else {
		return 'N';
	}
}

int main(){

	unsigned long long n{0};
	unsigned short t{0};

	std::cin >> t;

	for (unsigned short i = 0; i < t; i++) {
		std::cin >> n;
		std::cout << check_PESEL(n) << '\n';
	}
	

}

