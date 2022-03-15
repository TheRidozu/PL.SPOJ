    #include <iostream>
    #include <string>

    std::string reverseTab(short unsigned* T, short unsigned& N) {

        short int t;
        std::string text = "";

        for (short unsigned i = 0; i < N; i++) {
            if ( i < N / 2 ) {
                t = T[i];
                T[i] = T[N - 1 - i];
                T[N - 1 - i] = t;
            }
            text += std::to_string(T[i]) + " ";
        }

        return text;

    }

    int main(){
        short unsigned N;
        short unsigned t;

        std::cin >> t;

        for ( short unsigned i = 0; i < t; i++ ) {
            std::cin >> N;

            short unsigned* T = new short unsigned[N];

            for ( short unsigned i = 0; i < N; i++ ) {
                std::cin >> T[i];
            }

            std::cout << reverseTab(T, N) << '\n';

            delete[] T;
            T = nullptr;
        }

        return 0;
    }
