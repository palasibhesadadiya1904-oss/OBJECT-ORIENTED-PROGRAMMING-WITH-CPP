#include <iostream>
#include <string>
using namespace std;

class Employee {
    string name;
    float basicSalary;
    float bonus;

public:
       Employee() {
        name = "";
        basicSalary = 0;
        bonus = 2000;
    }
    Employee(string n, float b, float bo = 2000) {
        name = n;
        basicSalary = b;
        bonus = bo;
    }


    inline float totalSalary() {
        return basicSalary + bonus;
    }

    void display() {
        cout<<"==============================================";
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary() << endl;
        cout<<"==============================================";
        cout << endl;
    }
        void getdata()
        {
        cout << "\nEnter details for employee "  << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Basic Salary: ";
        cin >> basicSalary;
        cout << "Bonus: ";
        cin >> bonus;


        }

};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee* emp = new Employee[n];


    for(int i = 0; i < n; i++) {
     emp[i].getdata();


    }

    cout << "\nEmployee Details\n";
    for(int i = 0; i < n; i++) {
        emp[i].display();
    }

    delete[] emp;
    cout<<"25CE008";
    return 0;
}
