#include <bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        // cout << s << " " << e << endl;
        if (arr[mid] > arr[mid - 1] and arr[mid] > arr[mid + 1])
        {
            break;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return mid;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 4, 2, 1};
    cout << peakIndexInMountainArray(arr);
}
