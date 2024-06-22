#include <iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};
class Employee:AbstractEmployee {
private:
    string Company;
    int Age;
protected:
    string Name;
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

class Developer:public Employee{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string language):Employee(name, company, age){
        FavProgrammingLanguage = language;
    }
    void FixBug(){
        cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
    }
};

class Teacher:public Employee{
public:
    string Subject;
    void PrepareLesson(){
        cout << Name << " is preparing " << Subject << " subject." << endl;
    }
    Teacher(string name, string company, int age, string subject):Employee(name, company, age){
        Subject = subject;
    }
};
int main(){
    Developer d = Developer("John Rafael", "Skylar Corp. ", 31, "C++");
    d.FixBug();
    d.AskForPromotion();
    Teacher t = Teacher("Jen", "Cool School", 35, "History");
    t.PrepareLesson();
    t.AskForPromotion();

}
