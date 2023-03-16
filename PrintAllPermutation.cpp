#include <bits/stdc++.h>
using namespace std;
void printPermutation(vector<int> nums, vector<vector<int>> &ans, int index);

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    int index = 0;
    printPermutation(nums, ans, index);
    for (auto v : ans)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

void printPermutation(vector<int> nums, vector<vector<int>> &ans, int index)
{
    if (index == nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[index], nums[i]);
        printPermutation(nums, ans, index + 1);
        // Backtrack
        swap(nums[index], nums[i]);
    }
}
