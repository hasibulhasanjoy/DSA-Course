/*
? link : https://leetcode.com/problems/merge-sorted-array/
*/

#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int k = m + n - 1;
    int i = m - 1;
    int j = n - 1;
    while (i >= 0 and j >= 0)
    {
        if (nums1[i] < nums2[j])
        {
            nums1[k--] = nums2[j--];
        }
        else
        {
            nums1[k--] = nums1[i--];
        }
    }
    while (j >= 0)
    {
        nums1[k--] = nums2[j--];
    }
}
int main()
{
    vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    int m = arr1.size();
    vector<int> arr2 = {2, 5, 6};
    int n = arr2.size();
    merge(arr1, m, arr2, n);
    return 0;
}