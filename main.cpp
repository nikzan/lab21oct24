/**/

/*
*/

#include <iostream>
#include <climits>

int countBeforeFirstMin(const int* numbers, const int size) {
    int minIndex = -1;
    int minValue = INT_MAX;

    for (int i = 0; i < size; ++i) {
        if (numbers[i] < minValue) {
            minValue = numbers[i];
            minIndex = i;
        }
    }

    return minIndex;
}

int main() {
    int N;
    std::cout << "Enter the number of elements (N): ";
    std::cin >> N;

    if (N <= 0) {
        std::cerr << "Invalid value for N. It must be positive." << std::endl;
        return 1;
    }

    int* numbers = new int[N];
    std::cout << "Enter " << N << " integers: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> numbers[i];
    }

    int count = countBeforeFirstMin(numbers, N);
    std::cout << "Number of elements before the first minimum element: " << count << std::endl;

    delete[] numbers;
    return 0;
}