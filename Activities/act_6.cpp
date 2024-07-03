#include <iostream>
using namespace std;

class Student { //Defined class named Student
private:
    string name, classNum;
    int rollNum, marks;
public:
    // constructor to initialize Student object with provided details
    Student(string Name, string ClassNum, int RollNum, int Marks): name(Name), classNum(ClassNum), rollNum(RollNum), marks(Marks) {}

    //member function to calculate grade based on marks
    void calcGrade(){
        if(marks>=90){
            cout << "Grade: A+";
        }
        else if(marks>=80){
            cout << "Grade: A";
        }
        else if(marks>=70){
            cout << "Grade: B";
        }
        else if(marks>=60){
            cout << "Grade: C";
        }
        else{
            cout << "Grade: D";
        }
    }
    //member function to display student's information
    void displayInfo(){
        cout << "\nName: " << name << endl;
        cout << "Class: " << classNum << endl;
        cout << "Roll Number: " << rollNum << endl;
        cout << "Marks: " << marks << endl;
        calcGrade();
    }
};
// main function
int main(){
    string name, classNum;
    int rollNum, marks;
    cout << "Student details:\n";
    cout << "Name: ";
    cin >> name;
    cout << "Class: ";
    cin >> classNum;
    cout << "Roll Number: ";
    cin >> rollNum;
    cout << "Marks: ";
    cin >> marks;
    
    //creating a student object
    Student studentDetails(name, classNum, rollNum, marks);
    
    //display student's information
    studentDetails.displayInfo();

    return 0;
}