#include <bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // Write your code here.
    int i = 0, j = 0;
    vector<int> ans;
    int it = max(n, m);
    while (i < n and j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    if (ans.size() == 0)
    {
        ans.push_back(-1);
    }
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // !ONLINE_JUDGE
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr1, arr2(m);
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        vector<int> ans = findArrayIntersection(arr1, n, arr2, m);
    }
    return 0;
}