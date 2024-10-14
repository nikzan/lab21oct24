#include <iostream>

int countDigits(int N) {
    if (N > -10 && N < 10) {
        return 1;
    }
    return 1 + countDigits(N / 10);
}

int main() {
    int N;
    std::cout << "Enter an integer: ";
    std::cin >> N;
    std::cout << "Number of digits in " << N << " is " << countDigits(N) << std::endl;
    return 0;
}