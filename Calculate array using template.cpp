#include <iostream>

template <typename T, size_t N>

T arraySum(const T (&arr)[N]) {

    T sum = 0;

    for (size_t i = 0; i < N; ++i) {

        sum += arr[i];

    }

    return sum;

}

int main() {

    int intArray[] = {1, 2, 3, 4, 5};

    double doubleArray[] = {1.5, 2.5, 3.5, 4.5, 5.5};

    int intSum = arraySum(intArray);

    std::cout << "Sum of integers: " << intSum << std::endl;

    double doubleSum = arraySum(doubleArray);

    std::cout << "Sum of doubles: " << doubleSum << std::endl;

    return 0;

}
