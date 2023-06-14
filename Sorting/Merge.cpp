#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 3, 5, 2, 4, 6};
    int start = 0;
    int end = v.size() - 1;
    int mid = (start + end) / 2;
    vector<int> temp;
    int i = start, j = mid + 1;
    while (i <= mid and j <= end)
    {
        if (v[i] < v[j])
            temp.push_back(v[i++]);
        else
            temp.push_back(v[j++]);
    }
    while (i <= mid)
        temp.push_back(v[i++]);
    while (j <= end)
    {
        temp.push_back(v[j++]);
    }
    for (auto num : temp)
    {
        cout << num << " ";
    }
    return 0;
}