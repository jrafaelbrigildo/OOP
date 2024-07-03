#include <iostream>
using namespace std;


class Triangle {
private:
    double side_1;
    double side_2;
    double side_3;

public:
    Triangle(double s1, double s2, double s3): side_1(s1), side_2(s2), side_3(s3){}

    void checkTriangle(){
        if (side_1 != side_2 && side_2 != side_3 && side_1 != side_3){
            cout << "Scalene Triangle" << endl;
        }
        else if (side_1 == side_2 && side_2 == side_3){
            cout << "Equilateral Triangle" << endl;
        }
        else{
            cout << "Isosceles Triangle" << endl;
        }
    }
};

int main(){
    double s1, s2, s3;
    cout << "Input all the sides\n";
    cout << "Side 1: ";
    cin >> s1;
    cout << "Side 2: ";
    cin >> s2;
    cout << "Side 3: ";
    cin >> s3;

    Triangle triangle(s1, s2, s3);

    triangle.checkTriangle();

    return 0;
}