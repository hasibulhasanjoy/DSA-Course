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
    virtual void work()
    {
        cout << "performing random task " << endl;
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
    void work()
    {
        cout << "Writing " << favProgrammingLanguage << " code " << endl;
    }
    void print()
    {
        cout << "This is from Developer class " << endl;
    }
};
class Teacher : public Employee
{
public:
    Teacher(string name, string department, int age, int salary) : Employee(name, department, age, salary)
    {
    }
    void work()
    {
        cout << "Teaching " << getDepartment() << endl;
    }
};

int main(int argc, const char **argv)
{
    Developer d = Developer("Hasibul", "IT", 23, 15000, "C++");
    Teacher t = Teacher("jhon", "history", 30, 22500);
    // Employee e = Developer("Hasibul", "IT", 23, 15000, "C++");
    // Employee e2 = Teacher("jhon", "history", 30, 22500);
    Employee *e = &d;
    Employee *e2 = &t;
    e->work();
    // d.print();
    e2->work(); // Without The "virtual" keyword, only method form base class will executed

    return 0;
}
