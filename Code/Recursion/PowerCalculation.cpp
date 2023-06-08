#include <bits/stdc++.h>
using namespace std;
int power(int base, int exp)
{
    if (exp == 0)
        return 1;
    if (exp == 1)
        return base;
    return base * power(base, exp - 1);
}
int main()
{
    int base = 5, exp = 0;
    for (int i = 0; i < 5; i++)
        cout << power(base, i) << endl;
    return 0;
}