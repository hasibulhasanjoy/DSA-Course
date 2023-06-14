#include <bits/stdc++.h>
using namespace std;

void mergeArray(vector<int> &nums, int start, int end, int mid)
{
    int len1 = mid - start + 1;
    int len2 = end - mid;
    vector<int> v1(len1);
    vector<int> v2(len2);
    int index = start;
    for (int i = 0; i < len1; i++)
    {
        v1[i] = nums[index++];
    }
    for (int i = 0; i < len2; i++)
    {
        v2[i] = nums[index++];
    }
    int index1 = 0, index2 = 0;
    index = start;
    while (index1 < len1 and index2 < len2)
    {
        if (v1[index1] <= v2[index2])
            nums[index++] = v1[index1++];
        else
            nums[index++] = v2[index2++];
    }
    while (index1 < len1)
    {
        nums[index++] = v1[index1++];
    }

    while (index2 < len2)
    {
        nums[index++] = v2[index2++];
    }
}

void mergeSort(vector<int> &nums, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    // cout << "hi";
    int mid = (start + end) / 2;
    mergeSort(nums, start, mid);
    mergeSort(nums, mid + 1, end);
    mergeArray(nums, start, end, mid);
}
int main()
{
    vector<int> v = {2, 1, 7, 5, 3, 9, 0, 8, 4, 6};
    cout << "Before Sorting : ";
    for (auto num : v)
    {
        cout << num << " ";
    }
    cout << endl;
    int n = v.size();
    mergeSort(v, 0, n - 1);
    cout << "After Sorting : ";
    for (auto num : v)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}