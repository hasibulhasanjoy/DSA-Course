#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    string name;
    string department;
    int salary;
    Employee(string name, string department, int salary)
    {
        this->name = name;
        this->department = department;
        this->salary = salary;
    }
    void information()
    {
        cout << "Name : " << name << endl;
        cout << "Department : " << department << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    Employee employee = Employee("Hasibul Hasan", "SWE", 15000);
    employee.information();
    return 0;
}