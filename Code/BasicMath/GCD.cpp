#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    cout << a << " " << b << endl;
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    int a = 36, b = 24;
    cout << gcd(a, b);
    return 0;
}