#include <iostream>

double sumSeries(int N) {
    if (N == 1) {
        return 2.0;
    }
    return pow(2, pow(2, N - 1)) + sumSeries(N - 1);
}

int main() {
    int N;
    std::cout << "Enter a natural number (N < 8): ";
    std::cin >> N;
    if (N < 1 || N >= 8) {
        std::cerr << "Invalid input. N must be a number less than 8." << std::endl;
        return 1;
    }
    std::cout << "The sum of the first " << N << " terms is " << sumSeries(N) << std::endl;
    return 0;
}