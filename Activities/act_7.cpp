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

class Circle : public Shape{
private:
    double radius;

public:
    Circle(double rad) : radius(rad) {}

    double calculateArea() override{
        double circleArea = PI * pow(radius,2);
        return circleArea;
    }
    double calculatePerimeter() override{
        double circlePerimeter = PI * radius * 2;
        return circlePerimeter;
    }
};

class Rectangle : public Shape{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    
    double calculateArea(){
        double rectangleArea = width * length;
        return rectangleArea;
    }
    double calculatePerimeter(){
        double rectanglePerimeter = 2 * (width + length);
        return rectanglePerimeter;
    }
};

class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3){}

    double calculateArea(){
        double s = (side1 + side2 + side3) / 2;
        double triangleArea = sqrt(s*(s-side1)*(s-side2)*(s-side3));
        return triangleArea;
    }
    double calculatePerimeter(){
        double trianglePerimeter = side1 + side2 + side3;
        return trianglePerimeter;
    }
};

int main(){
    double r, w, l, s1, s2, s3;
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

    Circle circle(r);
    Rectangle rectangle(l, w);
    Triangle triangle(s1, s2, s3);

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