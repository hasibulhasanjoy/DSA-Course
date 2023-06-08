#include <bits/stdc++.h>
using namespace std;
class Employee
{
private:
    string name;
    string department;
    int salary;
    double bonus;
};

class BankAccount
{
public:
    string name;
    double balance;
    void information()
    {
        cout << "Name : " << name << endl;
        cout << "Balance : " << balance << endl;
    }
};

int main()
{
    Employee employee1;
    // employee1.salary = 14; --> private members cannot be accessed outside of the class
    BankAccount account;
    account.name = "Hasibul Hasan";
    account.balance = 1200;
    account.information();
}