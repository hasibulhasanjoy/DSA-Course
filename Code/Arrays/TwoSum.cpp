#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]] = i;
    }
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int c = target - nums[i];
        if (mp[c] != 0 and i != mp[c])
        {
            ans.push_back(i);
            ans.push_back(mp[c]);
            break;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 3, 4, 2};
    int target = 6;
    vector<int> ans = twoSum(nums, target);
    for (auto v : ans)
    {
        cout << v << " ";
    }
    return 0;
}