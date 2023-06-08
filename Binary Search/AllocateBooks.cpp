#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int pageSum = 0;
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            cnt++;
            if (cnt > m or arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
        if (cnt > m)
        {
            return false;
        }
    }
    return true;
}
int allocateBooks(vector<int> arr, int n, int m)
{
    int s = 0;
    int e = accumulate(arr.begin(), arr.end(), 0);
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    vector<int> arr = {48,90};
    int i = allocateBooks(arr, 2, 2);
    cout << i << endl;
    return 0;
}