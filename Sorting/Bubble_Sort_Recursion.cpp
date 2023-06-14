#include <bits/stdc++.h>
using namespace std;
void sorting(vector<int> &v, int n)
{
    if (n <= 1)
        return;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            swap(v[i], v[i + 1]);
        }
    }
    sorting(v, n - 1);
}
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
    sorting(v, n);
    cout << "After Sorting : ";
    for (auto num : v)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}