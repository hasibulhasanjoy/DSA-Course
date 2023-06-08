#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    string department;
    int age;
    int salary;

protected:
    string name;

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
    Employee(string name, string department, int age, int salary)
    {
        this->name = name;
        this->department = department;
        this->age = age;
        this->salary = salary;
    }
    void askForPromotion()
    {
        if (age > 30 and salary > 20000)
        {
            cout << "promoted!" << endl;
        }
        else
        {
            cout << "Not promoted!" << endl;
        }
    }
};

class Developer : public Employee
{
private:
    string favProgrammingLanguage;

public:
    Developer(string name, string department, int age, int salary, string favProgrammingLanguage)
        : Employee(name, department, age, salary)
    {
        this->favProgrammingLanguage = favProgrammingLanguage;
    }
    void information()
    {
        cout << "Name : " << name << endl;
        cout << "Department : " << getDepartment() << endl;
        cout << "Age : " << getAge() << endl;
        cout << "Salary : " << getSalary() << endl;
        cout << "Favorite Programming Language : " << favProgrammingLanguage << endl;
    }
};

int main()
{
    Developer d = Developer("Hasibul", "IT", 23, 15000, "java");
    d.information();
    d.askForPromotion();// valid if "Developer : public Employee", Invalid if "Developer : Employee"
    int a = d.getAge();
    return 0;
}