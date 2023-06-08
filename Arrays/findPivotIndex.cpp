#include <bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int> &nums)
{
    int n = nums.size();
    vector<int> pre1(n + 2), pre2(n + 2);
    pre1[0] = 0;
    for (int i = 0; i < n; i++)
    {
        pre1[i + 1] = (pre1[i] + nums[i]);
    }
    pre1[n + 1] = 0;
    pre2[0] = 0;
    pre2[n] = nums[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        pre2[i] = pre2[i + 1] + nums[i - 1];
    }
    pre2[n + 1] = 0;
    for (int i = 1; i <= n; i++)
    {
        if (pre1[i] == pre2[i] and pre1[i - 1] == pre2[i + 1])
        {
            return i - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {10, -10, 3};
    int i = pivotIndex(arr);
    cout << i << endl;
    return 0;
}