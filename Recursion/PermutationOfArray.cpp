#include <bits/stdc++.h>
using namespace std;
void generatePermutation(vector<int> &nums, vector<vector<int>> &ans, int index)
{
    if (index == nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[i], nums[index]);
        generatePermutation(nums, ans, index + 1);
        swap(nums[i], nums[index]);
    }
}
vector<vector<int>> permutation(vector<int> &nums)
{
    vector<vector<int>> ans;
    int index = 0;
    generatePermutation(nums, ans, index);
    return ans;
}
int main()
{
    vector<int> v = {1, 2, 3};
    vector<vector<int>> ans = permutation(v);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}