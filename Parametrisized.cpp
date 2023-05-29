#include <iostream>

class Calculator {

public:

    Calculator(int num1, int num2) {

        this->num1 = num1;

        this->num2 = num2;

    }

    int add() {

        return num1 + num2;

    }

    int sub() {

        return num1 - num2;

    }

private:

    int num1;

    int num2;

};

int main() {

    int a, b;

    std::cout << "Enter two numbers: ";

    std::cin >> a >> b;

    Calculator calc(a, b);

    int sum = calc.add();

    int difference = calc.sub();

    std::cout << "Sum: " << sum << std::endl;

    std::cout << "Difference: " << difference << std::endl;

    return 0;

}
