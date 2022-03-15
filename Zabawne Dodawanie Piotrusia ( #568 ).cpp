#include <iostream>
#include <string>

using namespace std;

unsigned int number_reverse(unsigned int n) {
    unsigned int t, reverseNumber = 0;
    

    while (n != 0) {
        t = n % 10;
        reverseNumber = reverseNumber * 10 + t;
        n /= 10;
    }
    
    return reverseNumber;
}

string palindrom(unsigned int& n) {
   unsigned int b = number_reverse(n), sum = 0;

    while (n != b) {
        n += b;
        b = number_reverse(n);
        sum++;
    }

    return to_string(n) + " " + to_string(sum);
}

int main(){

    unsigned int t, n;

    cin >> t;

    for (unsigned int i = 0; i < t; i++) {
        cin >> n;
        cout << palindrom(n) << endl;
    }

}

