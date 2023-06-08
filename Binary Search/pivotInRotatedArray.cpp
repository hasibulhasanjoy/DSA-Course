#include <bits/stdc++.h>
using namespace std;
int findPivot(vector<int> arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    vector<int> arr = {4, 7, 8, 9, 10, 11, 1, 2, 3};
    int i = findPivot(arr);
    cout << "Pivot is " << i << endl;
    return 0;
}