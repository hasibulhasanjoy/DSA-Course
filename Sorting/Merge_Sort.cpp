#include <bits/stdc++.h>
using namespace std;

void sortAndMerge(vector<int> &nums, int start, int end, int mid)
{
    // Array is faster than vector. using array is more efficient than using vector
    int temp[nums.size()];
    int i = start, j = mid + 1;
    int index = start;
    while (i <= mid and j <= end)
    {
        if (nums[i] <= nums[j])
        {
            temp[index++] = nums[i++];
        }
        else
        {
            temp[index++] = nums[j++];
        }
    }
    while (i <= mid)
    {
        temp[index++] = nums[i++];
    }
    while (j <= end)
    {
        temp[index++] = nums[j++];
    }
    for (int i = start; i <= end; i++)
    {
        nums[i] = temp[i];
    }
}

void mergeSort(vector<int> &nums, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    mergeSort(nums, start, mid);
    mergeSort(nums, mid + 1, end);
    sortAndMerge(nums, start, end, mid);
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