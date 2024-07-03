#include <iostream>
using namespace std;

class Employee{
private:
    string name;
    int empId;
    double salary;
public:
    Employee(string Name, int EmpId, double Salary): name(Name), empId(EmpId), salary(Salary) {}

    double calculateSalary(double performanceRating){
        if(performanceRating >= 0.0 && performanceRating <= 1.4){
            salary *= performanceRating;
            return salary;
        }
        else{
            return salary;
        }
    }
    double getSalary(){
        return salary;
    }
    string getName(){
        return name;
    }
    int getEmpId(){
        return empId;
    }
};

int main(){
    string empName;
    int empId;
    double salary;
    double performRating;
    cout << "Enter employee ID: ";
    cin >> empId;
    cout << "Enter employee Name: ";
    cin >> empName;
    cout << "Enter salary: ";
    cin >> salary;
    
    Employee employee(empName, empId, salary);
    cout << "Initial Salary: " << employee.getSalary() << endl;
    
    cout << "Enter performance rating (0.0 - 1.4): ";
    cin >> performRating;
    employee.calculateSalary(performRating);
    cout << "Updated Salary: " << employee.getSalary() << endl;

    return 0;
}