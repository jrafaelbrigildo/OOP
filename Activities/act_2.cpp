#include <iostream>

using namespace std;

class Car {
private:
    string company;
    string model;
    int year;
public:
    void setCompany(string Company){
        company = Company;
    }
    void setModel(string Model){
        model = Model;
    }
    void setYear(int Year){
        year = Year;
    }
    string getCompany(){
        return company;
    }
    string getModel(){
        return model;
    }
    int getYear(){
        return year;
    }
    Car(string Company, string Model, int Year){
        company = Company;
        model = Model;
        year = Year;
    }
};

int main(){
    Car car_1 = Car("AUDI", "A6", 2023);
    cout << "Company: " << car_1.getCompany() << endl;
    cout << "Model: " << car_1.getModel() << endl;
    cout << "Year: " << car_1.getYear() << endl << endl;
    car_1.setCompany("BMW");
    car_1.setModel("M4");
    car_1.setYear(2022);
    cout << "Updated Company: " << car_1.getCompany() << endl;
    cout << "Updated Model: " << car_1.getModel() << endl;
    cout << "Updated Year: " << car_1.getYear() << endl;


}