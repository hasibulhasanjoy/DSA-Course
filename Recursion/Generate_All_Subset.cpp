#include <bits/stdc++.h>
using namespace std;

void generateSubset(vector<int> &v, vector<int> &output, vector<vector<int>> &ans, int index)
{
    if (index >= 3)
    {
        ans.push_back(output);
        return;
    }
    // include
    output.push_back(v[index]);
    generateSubset(v, output, ans, index + 1);
    // exclude
    output.pop_back();
    generateSubset(v, output, ans, index + 1);
}
vector<vector<int>> subset(vector<int> &v)
{
    vector<int> output;
    vector<vector<int>> ans;
    int index = 0;
    generateSubset(v, output, ans, index);
    return ans;
}
int main()
{
    vector<int> v = {1, 2, 3};
    vector<vector<int>> ans = subset(v);
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
//? Question : https://leetcode.com/problems/subsets/
//? video: https://www.youtube.com/watch?v=V0IgCltYgg4&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=41&ab_channel=CodeHelp-byBabbar