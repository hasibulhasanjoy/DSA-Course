#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {5, 4, -1, 7, 8};
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        int c = n;
        for (int j = i; j < n; j++)
        {
            for (int k = i; k < c; k++)
            {
                cout << v[k] << " ";
            }
            cout << endl;
            c--;
        }
    }
    return 0;
}