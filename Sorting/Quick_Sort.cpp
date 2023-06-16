#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &nums, int start, int end)
{
    int pivot = nums[start];
    int countLessThenPivot = 0;
    for (int i = start; i <= end; i++)
    {
        if (nums[i] < pivot)
        {
            countLessThenPivot++;
        }
    }
    int pivotIndex = start + countLessThenPivot;
    swap(nums[start], nums[pivotIndex]);
    int i = start, j = end;
    while (i < j and i < pivotIndex and j > pivotIndex)
    {
        if (nums[i] >= pivot and nums[j] <= pivot)
        {
            swap(nums[i++], nums[j--]);
            continue;
        }
        if (nums[i] <= pivot)
        {
            i++;
        }
        if (nums[j] >= pivot)
        {
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(vector<int> &nums, int start, int end)
{
    if (start >= end)
        return;
    int p = partition(nums, start, end);
    quickSort(nums, start, p - 1);
    quickSort(nums, p + 1, end);
}
int main()
{
    vector<int> v = {2, 1, 7, 5, 3, 9, 0, 8, 4, 6, 6, 6};
    cout << "Before Sorting : ";
    for (auto num : v)
    {
        cout << num << " ";
    }
    cout << endl;
    int n = v.size();
    quickSort(v, 0, n - 1);
    cout << "After Sorting : ";
    for (auto num : v)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}