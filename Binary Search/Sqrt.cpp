#include <bits/stdc++.h>
using namespace std;
int squareRoot(int n)
{
    int s = 1;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long ans;
    while (s <= e)
    {
        long long x = mid * mid;
        if (x == n)
        {
            return mid;
        }
        else if (x < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double precision(int n, int p, int r)
{
    double f = 1;
    double ans = r;
    for (int i = 0; i < p; i++)
    {
        f = f / 10;
        for (double j = ans; j * j <= n; j += f)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n = 2;
    int ans = squareRoot(n);
    cout << ans << endl;
    cout << precision(n, 3, ans) << endl;
    return 0;
}