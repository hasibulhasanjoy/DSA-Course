#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 1, 7, 5, 3, 9, 0, 8, 4, 6};
    cout << "Before Sorting : ";
    for (auto num : v)
    {
        cout << num << " ";
    }
    cout << endl;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        bool isSorted = true;
        for (int j = 0; j < ((n - i) - 1); j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                isSorted = false;
            }
        }
        if (isSorted)
            break;
    }
    cout << "After Sorting : ";
    for (auto num : v)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}