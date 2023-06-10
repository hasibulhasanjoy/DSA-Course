#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &v, int s, int e, int key)
{
    if (s > e)
    {
        return -1;
    }
    int mid = (s + e) / 2;
    if (key == v[mid])
    {
        return mid;
    }
    else if (key > v[mid])
    {
        return search(v, mid + 1, e, key);
    }
    else
    {
        return search(v, s, mid - 1, key);
    }
}
int main()
{
    vector<int> nums = {2, 3, 5, 8, 10, 12, 14, 15, 19, 23, 25};
    int start = 0, end = nums.size() - 1, key = 12;
    for (int i = 0; i <= end; i++)
    {
        cout << i << " " << nums[i] << endl;
    }
    cout << "Search result : " << endl;
    cout << search(nums, start, end, key) << endl;
    cout << search(nums, start, end, 2) << endl;
    cout << search(nums, start, end, 25) << endl;
    cout << search(nums, start, end, 4) << endl;
    return 0;
}