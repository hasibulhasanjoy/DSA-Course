#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    string name;
    string department;
    int age;
    int salary;

public:
    void setName(string name)
    {
        this->name = name;
    }
    void setDepartment(string department)
    {
        this->department = department;
    }
    void setAge(int age)
    {
        if (age > 17)
        {
            this->age = age;
        }
    }
    void setSalary(int salary)
    {
        this->salary = salary;
    }
    string getName()
    {
        return name;
    }
    string getDepartment()
    {
        return department;
    }
    int getAge()
    {
        return age;
    }
    int getSalary()
    {
        return salary;
    }
    void information()
    {
        cout << "Name : " << getName() << endl;
        cout << "Department : " << getDepartment() << endl;
        cout << "Age : " << getAge() << endl;
        cout << "Salary : " << getSalary() << endl;
    }
};

int main()
{
    Employee e;
    e.setName("Hasibul Hasan");
    e.setDepartment("IT");
    e.setAge(23);
    e.setSalary(15000);
    e.information();
    return 0;
}