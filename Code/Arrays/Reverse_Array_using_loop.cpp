#include <bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &arr, int m)
{
    int i = m;
    int j = arr.size() - 1;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverseArray(v, 5);
    for (auto value : v)
    {
        cout << value << " ";
    }
    return 0;
}