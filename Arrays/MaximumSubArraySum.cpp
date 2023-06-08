#include <bits/stdc++.h>
using namespace std;
int bruteForceApproach(vector<int> &v, int n)
{
    int sum = 0;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int c = n;
        for (int j = i; j < n; j++)
        {
            for (int k = i; k < c; k++)
            {
                sum = sum + v[k];
            }
            c--;
            mx = max(mx, sum);
            sum = 0;
        }
    }
    return mx;
}

int optimized(vector<int> &v, int n)
{
    // Kadane's Algorithm
    int sum = 0;
    int mx = v[0];
    for (int i = 0; i < n; i++)
    {
        sum = sum + v[i];
        mx = max(sum, mx);
        sum = max(sum, 0);
    }
    return mx;
}
int main()
{
    vector<int> v = {-5, 1000, -1, -7, -8};
    int n = v.size();
    int mx = bruteForceApproach(v, n);
    cout << mx << endl;
    mx = optimized(v, n);
    cout << mx << endl;
    return 0;
}