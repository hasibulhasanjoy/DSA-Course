//? link : https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6
#include <bits/stdc++.h>
using namespace std;
vector<int> wavePrint(vector<vector<int>> &arr, int nRows, int mCols)
{
    vector<int> ans;
    for (int i = 0; i < mCols; i++)
    {
        if (i % 2 == 0)
        {
            int j = 0;
            while (j < nRows)
            {
                ans.push_back(arr[j++][i]);
            }
        }
        else
        {
            int k = nRows - 1;
            while (k >= 0)
            {
                ans.push_back(arr[k--][i]);
            }
        }
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
        vector<vector<int>> arr;
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            vector<int> temp;
            for (int j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            arr.push_back(temp);
        }
        vector<int> ans;
        ans = wavePrint(arr, n, m);
        for (int i = 0; i < n * m; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
