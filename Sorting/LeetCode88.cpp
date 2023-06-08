#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums1 = {10, 11, 12, 13, 0, 0, 0, 0, 0, 0};
    vector<int> nums2 = {1, 2, 3, 4, 5, 6};
    int m = 4;
    int n = 6;
    int index1 = m - 1;
    int index2 = n - 1;
    int k = m + n - 1;
    while (index1 >= 0 and index2 >= 0)
    {
        if (nums1[index1] < nums2[index2])
        {
            nums1[k--] = nums2[index2--];
        }
        else
        {
            nums1[k--] = nums1[index1--];
        }
    }
    while (index2 >= 0)
    {
        nums1[k--] = nums2[index2--];
    }
    for (int i = 0; i < m + n; i++)
    {
        cout << nums1[i] << " ";
    }
    return 0;
}