#include <bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> v, int n);
int main()
{
    vector<int> v;
    v = {1, 2, 3, 4, 5};
    int n = v.size() - 1;
    cout << isSorted(v, n) << endl;
    return 0;
}

bool isSorted(vector<int> v, int n)
{
    if (v[n - 1] >= v[n])
    {
        return false;
    }
    if (n == 1)
    {
        return true;
    }
    return isSorted(v, n - 1);
}