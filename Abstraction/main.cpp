#include <iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};
class Employee:AbstractEmployee {
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
    void AskForPromotion(){
        if(Age > 30)
            cout << Name << " got promoted!" << endl;
        else
            cout << "Sorry " << Name << " you're not got promoted!" << endl;
    }
};

int main(){
    Employee employee_1 = Employee("John Rafael", "Skylar Corp.", 31);
    Employee employee_2 = Employee("Robert", "Indian Corp.", 22);
   
    employee_1.AskForPromotion();
    employee_2.AskForPromotion();
}
