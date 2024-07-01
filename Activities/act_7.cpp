#include <iostream> //Include necessary header for input/output
#include <cmath>
using namespace std;

const double PI = 3.14159; //Define const value for PI

class Shape{ //Define base class Shape
public:
    //pure virtual functions declarations
    virtual double calculateArea() = 0;
    virtual double calculatePerimeter() = 0;
};
//derived Circle class
class Circle : public Shape{
private:
    double radius;

public:
    Circle(double rad) : radius(rad) {} //Constructor for Circle class
    //override the virtual member function to calculate area
    double calculateArea() override{
        double circleArea = PI * pow(radius,2); //formula to calculate the area of circle
        return circleArea;
    }
    //override the virtual member function to calculate perimeter
    double calculatePerimeter() override{
        double circlePerimeter = PI * radius * 2; //formula to calculate the perimeter of circle
        return circlePerimeter;
    }
};
// derived Rectangle class
class Rectangle : public Shape{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {} //Contructor for Rectangle class
    //Override the virtual member function to calculate the area
    double calculateArea(){
        double rectangleArea = width * length; // formula to calculate the area of rectangle
        return rectangleArea;
    }
    //Override the virtual member function to calculate the perimeter
    double calculatePerimeter(){
        double rectanglePerimeter = 2 * (width + length); //formula to calculate the perimeter of rectangle
        return rectanglePerimeter;
    }
};
//derived Triangle class
class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3){} //Constructor for Triangle class
    //Override the virtual member function to calculate the area
    double calculateArea(){
        double s = (side1 + side2 + side3) / 2; //semi-perimeter of triangle
        double triangleArea = sqrt(s*(s-side1)*(s-side2)*(s-side3)); // Heron's Formula
        return triangleArea;
    }
    double calculatePerimeter(){
        double trianglePerimeter = side1 + side2 + side3; //formula to calculate the perimeter of triangle
        return trianglePerimeter;
    }
};

int main(){
    double r, w, l, s1, s2, s3; //define variables
    //Input the necessary values to calculate the area and perimeter of the shapes
    cout << "Enter Circle's Radius: ";
    cin >> r;
    cout << "Enter Rectangle's width: ";
    cin >> w;
    cout << "Enter Rectangle's length: ";
    cin >> l;
    cout << "Enter Triangle's side 1: ";
    cin >> s1;
    cout << "Enter Triangle's side 2: ";
    cin >> s2;
    cout << "Enter Triangle's side 3: ";
    cin >> s3;

    //Create an instances of different shape classes
    Circle circle(r);
    Rectangle rectangle(l, w);
    Triangle triangle(s1, s2, s3);

    //Calculate and display the area and perimeter of each shape
    cout << "\nCircle: " << endl;
    cout << "Area: " << circle.calculateArea() << endl ;
    cout << "Perimeter: " << circle.calculatePerimeter() << endl;
    cout << "\nRectangle: " << endl;
    cout << "Area: " << rectangle.calculateArea() << endl;
    cout << "Perimeter: " << rectangle.calculatePerimeter() << endl;
    cout << "\nTriangle: " << endl;
    cout << "Area: " << triangle.calculateArea() << endl;
    cout << "Perimeter: " << triangle.calculatePerimeter() << endl;

    return 0;
}