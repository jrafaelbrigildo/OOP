#include <iostream>
using std::string;

// Definition of the Employee class
class Employee {
public:
    // Public member variables
    string Name;
    string Company;
    int Age;

    // Member function to introduce the employee
    void IntroduceYourSelf() {
        std::cout << "My Name is " << Name << ", " 
                  << Age << " years old and I worked on " << Company;
    }

    // Constructor to initialize an Employee object
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main() {
    // Creating an Employee object with the given details
    Employee employee_1 = Employee("John Rafael", "SkyLar Corp.", 23);
    // Calling the member function to introduce the employee
    employee_1.IntroduceYourSelf();
    
    // Creating another Employee object with different details
    Employee employee_2 = Employee("Robert", "Indian Corp.", 22);
    // Calling the member function to introduce the second employee
    employee_2.IntroduceYourSelf();
}
