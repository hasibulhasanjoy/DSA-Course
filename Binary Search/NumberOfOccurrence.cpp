#include <bits/stdc++.h>
using namespace std;
int firstOccurrence(vector<int> &v, int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (v[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > v[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOccurrence(vector<int> &v, int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (v[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > v[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    vector<int> v = {0, 0, 1, 1, 2, 2, 2, 2};
    int cnt = 0;
    if (firstOccurrence(v, v.size(), 2) != -1)
    {
        cnt = lastOccurrence(v, v.size(), 2) - firstOccurrence(v, v.size(), 2) + 1;
    }
    cout << cnt << endl;
    return 0;
}