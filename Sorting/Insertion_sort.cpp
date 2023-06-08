#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        int j = i - 1;
        int temp = v[i];
        while (v[j] > temp and j >= 0)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = temp;
    }
}
int main()
{
    vector<int> v = {10, 1, 7, 4, 8, 2, 11};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    insertionSort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}