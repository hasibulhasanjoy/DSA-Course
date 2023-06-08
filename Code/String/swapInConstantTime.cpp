#include <bits/stdc++.h>
using namespace std;
int main()
{
    string food = "rice";
    string drink = "water";
    string *temp1 = &food;
    string *temp2 = &drink;
    cout << "******before swap****** " << endl;
    cout << *temp1 << " " << *temp2 << endl;
    string *temp3 = temp1;
    temp1 = temp2;
    temp2 = temp3;
    cout << "*********after swap******* " << endl;
    cout << *temp1 << " " << *temp2 << endl;
    return 0;
}