#include <bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i = 0;
    int j = 0;
    vector<int> v(m + n);
    int k = 0;
    while (i < n and j < m)
    {
        if (arr1[i] < arr2[j])
        {
            v[k++] = arr1[i];
            i++;
        }
        else
        {
            v[k++] = arr2[j];
            j++;
        }
    }
    while (i < n)
    {
        v[k++] = arr1[i++];
    }
    while (j < m)
    {
        v[k++] = arr2[j++];
    }
    return v;
}
int main()
{
    vector<int> arr1 = {10, 11, 12, 13};
    int n = arr1.size();
    vector<int> arr2 = {2, 4, 6, 8, 13, 14, 15};
    int m = arr2.size();
    vector<int> v = merge(arr1, n, arr2, m);
    for (auto value : v)
    {
        cout << value << " ";
    }
    return 0;
}