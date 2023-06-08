#include <bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> v, int key)
{
    int s = 0;
    int e = v.size() - 1;
    int index;
    if (key > v[e])
    {
        return -1;
    }
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (v[mid] == key)
        {
            index = mid;
            break;
        }
        else if (v[mid] > key)
        {
            index = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return index;
}

int upperBound(vector<int> v, int key)
{
    int s = 0;
    int e = v.size() - 1;
    int index;
    if (key > v[e])
    {
        return -1;
    }
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (v[mid] == key)
        {
            index = mid + 1;
            if (index >= v.size())
            {
                index = -1;
            }
            break;
        }
        else if (v[mid] > key)
        {
            index = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return index;
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 6, 7, 8, 9};
    int key = 5;
    int a = *lower_bound(v.begin(), v.end(), key);
    int b = *upper_bound(v.begin(), v.end(), key);
    cout << a << " " << b << endl;
    int i = lowerBound(v, key);
    cout << v[i] << " ";
    int j = upperBound(v, key);
    cout << v[j] << endl;
    return 0;
}