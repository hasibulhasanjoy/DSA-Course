#include <bits/stdc++.h>
using namespace std;
bool isPresent(vector<int> &v, int element)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = e - (e - s) / 2;
    while (s <= e)
    {
        if (v[mid] == element)
        {
            return true;
        }
        else if (element < v[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = e - (e - s) / 2;
    }
    return false;
}
int main()
{
    vector<int> arr = {1, 2, 3, 1, 2, 3};
    unordered_set<int> s;
    for (auto v : arr)
    {
        s.insert(v);
    }
    vector<int> a;
    for (auto v : s)
    {
        a.push_back(v);
    }
    sort(a.begin(), a.end());
    int n = a.size();
    int sum = 6;
    vector<vector<int>> ans;
    int cnt = 0;
    map<vector<int>, int> hash;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            int f = sum - (a[i] + a[j]);
            if (isPresent(a, f))
            {
                ans.push_back({a[i], a[j], f});
            }
        }
    }
    auto it = ans.begin();
    while (it != ans.end())
    {
        for (auto itt = it->begin(); itt != it->end(); itt++)
        {
            cout << *itt << " ";
        }
        cout << endl;
        it++;
    }

    return 0;
}