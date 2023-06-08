#include <bits/stdc++.h>
using namespace std;
int findPivot(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
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
int binarySearch(vector<int> arr, int s, int e, int k)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (k < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int findPosition(vector<int> &arr, int n, int k)
{
    int pivot = findPivot(arr);
    int element = k;
    int s = 0;
    int e = n - 1;
    if (element >= arr[pivot] and element <= arr[n - 1])
    {
        return binarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}
int main()
{
    vector<int> arr = {4, 7, 8, 9, 10, 11, 1, 2, 3};
    int n = arr.size();
    cout << "position : " << findPosition(arr, n, 4) << endl;
    return 0;
}