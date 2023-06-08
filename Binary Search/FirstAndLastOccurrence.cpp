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
pair<int, int> solve(vector<int> &v, int n, int key)
{
    pair<int, int> p;
    p.first = firstOccurrence(v, n, key);
    p.second = lastOccurrence(v, n, key);
    return p;
}
int main()
{
    vector<int> v = {0, 0, 1, 1, 2, 2, 2, 2};
    pair<int, int> p = solve(v, 8, 2);
    cout << p.first << " " << p.second << endl;
    return 0;
}