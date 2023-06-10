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
int modularPower(int base, int exp)
{
    if (exp == 0)
        return 1;
    else if (exp == 1)
        return base;
    int ans = modularPower(base, exp / 2);
    if (exp % 2 == 0)
        return ans * ans;
    else
        return base * ans * ans;
}
int main()
{
    int base = 5, exp = 0;
    for (int i = 0; i < 5; i++)
        cout << modularPower(base, i) << " " << power(base, i) << endl;
    return 0;
}