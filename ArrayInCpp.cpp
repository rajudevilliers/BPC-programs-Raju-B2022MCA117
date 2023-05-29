#include <iostream>

#include <string>

class Student {

public:

    std::string name;

    int age;

    std::string field;

    void display() {

        std::cout << "Name: " << name << std::endl;

        std::cout << "Age: " << age << std::endl;

        std::cout << "Field: " << field << std::endl;

    }

};

int main() {

    Student students[5]; // Array of 5 Student objects

    std::cout << "Enter details for three students:\n";

    for (int i = 0; i < 3; ++i) {

        std::cout << "Student " << (i + 1) << ":\n";

        std::cout << "Name: ";

        std::cin >> students[i].name;

        std::cout << "Age: ";

        std::cin >> students[i].age;

        std::cout << "Field: ";

        std::cin >> students[i].field;

        std::cout << std::endl;

    }

    std::cout << "Displaying details of all students:\n";

    for (int i = 0; i < 3; ++i) {

        std::cout << "Student " << (i + 1) << ":\n";

        students[i].display();

        std::cout << std::endl;

    }

    return 0;

}
