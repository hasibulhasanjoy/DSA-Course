#include <bits/stdc++.h>
using namespace std;
vector<int> fibonacciCache(51, -1);
int fibonacci(int n)
{
    if (fibonacciCache[n] != -1)
        return fibonacciCache[n];
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    int ans = fibonacci(n - 2) + fibonacci(n - 1);
    fibonacciCache[n] = ans;
    return ans;
}
int main()
{
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,144,233,377,610,987, 1597, 2584, 4181,
    fibonacciCache[0] = 0;
    int n = 50;
    // cin >> n;
    for (int i = 1; i <= n; i++)
        cout << fibonacci(i) << " ";
    return 0;
}