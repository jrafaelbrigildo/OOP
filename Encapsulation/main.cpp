#include <iostream>
using namespace std;

class Employee {
private:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }
    void IntroduceYourSelf(){
        cout << "My Name is " << Name << ", " << Age <<
            " years old and I worked on " << Company << endl;
    } 
    Employee (string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main(){
    Employee employee_1 = Employee("John Rafael", "Skylar Corp.", 23);
    employee_1.IntroduceYourSelf();

    Employee employee_2 = Employee("Robert", "Indian Corp.", 22);
    employee_2.IntroduceYourSelf();

    employee_1.setAge(24);
    cout << employee_1.getName() << " is " << employee_1.getAge() << " years old." << endl;
}
