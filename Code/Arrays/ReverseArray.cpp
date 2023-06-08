#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int n = v.size() - 1;
    for (int i = 0; i <= n / 2; i++)
    {
        swap(v[i], v[n - i]);
    }
    for (int i = 0; i <= n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}