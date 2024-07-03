#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

class Circle {
private:
    double radius;
public:
    Circle(double rad): radius(rad){}
    double CalculateArea(){
        return PI * pow(radius, 2);    
    }
    double CalculateCircumference(){
        return 2 * PI * radius;
    }
};

int main(){
    double radius;
    cout << "Enter radius value: ";
    cin >> radius;
    Circle circle(radius);
    cout << "Area: " << circle.CalculateArea() << endl;
    cout << "Circumference: " << circle.CalculateCircumference() << endl;
}