#include <bits/stdc++.h>
using namespace std;
int last(vector<vector<int>> &mat, int i)
{
    int s = 0;
    int e = mat[i].size() - 1;
    int index = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mat[i][mid] == 1)
        {
            index = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return index;
}
vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
{
    int row = mat.size();
    vector<pair<int, int>> mp;
    vector<int> ans;
    for (int i = 0; i < row; i++)
    {
        int cnt = last(mat, i);
        if (cnt == -1)
        {
            mp.push_back({0, i});
        }
        else
        {
            mp.push_back({(cnt + 1), i});
        }
    }
    sort(mp.begin(), mp.end());
    for (int i = 0; i < k; i++)
    {
        ans.push_back(mp[i].second);
    }
    return ans;
}
int main()
{
    vector<vector<int>> mat = {{1, 1, 0, 0, 0},
                               {1, 1, 1, 1, 0},
                               {1, 0, 0, 0, 0},
                               {1, 1, 0, 0, 0},
                               {1, 1, 1, 1, 1}};
    int row = mat.size();
    vector<int> ans = kWeakestRows(mat, 3);
    for (int i = 0; i < 3; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}