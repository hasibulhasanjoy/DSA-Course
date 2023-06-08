#include <bits/stdc++.h>
using namespace std;
int peakElement(vector<int> v, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            return i + 1;
        }
    }
    return n;
}
void print_all_peak_index(vector<int> v, int n)
{
    // when the array is increasing f is true and when the array is decreasing f is false
    bool f = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (f)
        {
            if (v[i] < v[i + 1])
            {
                continue;
            }
            else
            {
                cout << i << " ";
                f = 0;
            }
        }
        if (!f)
        {
            if (v[i] > v[i + 1])
            {
                continue;
            }
            else
            {
                f = true;
            }
        }
    }
    if (v[n - 1] > v[n - 2])
    {
        cout << n - 1;
    }
    cout << endl;
}
void another_approach(vector<int> v, int n)
{
    if (v[0] > v[1])
    {
        cout << "0 ";
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] > v[i - 1] and v[i] > v[i + 1])
        {
            cout << i << " ";
        }
    }
    if (v[n - 1] > v[n - 2])
    {
        cout << n - 1;
    }
    cout << endl;
}
int main()
{
    vector<int> nums = {10, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = nums.size();
    cout << peakElement(nums, n) << endl;
    vector<int> peak = {1, 2, 3, 2, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 3, 4, 5, 6, 5, 4, 3, 2};
    print_all_peak_index(peak, peak.size());
    another_approach(peak, peak.size());
    vector<int> arr = {5, 10, 5, 7, 4, 3, 5};
    print_all_peak_index(arr, arr.size());
    another_approach(arr, arr.size());
    arr = {4, 3, 2};
    print_all_peak_index(arr, arr.size());
    another_approach(arr, arr.size());
    return 0;
}