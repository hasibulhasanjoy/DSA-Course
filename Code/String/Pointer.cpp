#include <bits/stdc++.h>
using namespace std;
int main()
{
    string food = "rice";
    string drink = "water";
    string *q = &drink;
    string *p = &food;
    cout << &food << endl;
    cout << p << endl;
    cout << food << endl;
    cout << *p << endl;
    return 0;
}