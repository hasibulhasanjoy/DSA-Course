#include <bits/stdc++.h>
using namespace std;

int binary_Search(vector<int> v, int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (v[mid] == key)
        {
            return mid;
        }
        if (key > v[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 1;
    int index = binary_Search(v, 0, v.size() - 1, key);
    if (index == -1)
    {
        cout << "Element Not Found!\n";
    }
    else
        cout << index + 1 << endl;
    return 0;
}
// comment