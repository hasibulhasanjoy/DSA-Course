#include <bits/stdc++.h>
using namespace std;
int sum(vector<int> &v, int n)
{
    if (n == 0)
        return v[0];
    return v[n] + sum(v, n - 1);
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = v.size() - 1;
    int ans = 0;
    cout << sum(v, n);
    return 0;
}