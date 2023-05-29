#include <iostream>

class Circle {

private:

    double radius;

public:

    Circle(double r) {

        radius = r;

    }

    double getRadius() {

        return radius;

    }

    double calculateArea() {

        return 3.14159 * radius * radius;

    }

};

int main() {

    double radius;

    std::cout << "Enter the radius of the circle: ";

    std::cin >> radius;
