#include <iostream>

class NumberPair {

private:

    int number1;

    int number2;

public:

    NumberPair(int num1, int num2) {

        number1 = num1;

        number2 = num2;

    }

    void findLargestAndSmallest() {

        int largest = (number1 > number2) ? number1 : number2;

        int smallest = (number1 < number2) ? number1 : number2;

        std::cout << "Largest number: " << largest << std::endl;

        std::cout << "Smallest number: " << smallest << std::endl;

    }

};

int main() {

    int num1, num2;

    std::cout << "Enter the first number: ";

    std::cin >> num1;

    std::cout << "Enter the second number: ";

    std::cin >> num2;

    NumberPair pair(num1, num2);

    pair.findLargestAndSmallest();

    return 0;

}
