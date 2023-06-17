#include <bits/stdc++.h>
using namespace std;

void getCombination(string &digit, string &output, vector<string> &ans, string *mapping, int index)
{
    if (index == digit.length())
    {
        ans.push_back(output);
        return;
    }
    int key = digit[index] - '0';
    string value = mapping[key];
    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        getCombination(digit, output, ans, mapping, index + 1);
        output.pop_back();
    }
}

vector<string> letterCombinations(string &digits)
{
    string output = "";
    vector<string> ans;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    getCombination(digits, output, ans, mapping, 0);
    return ans;
}

int main()
{
    string digit = "23";
    vector<string> ans = letterCombinations(digit);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
//? video : https://www.youtube.com/watch?v=tWnHbSHwNmA&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=42&t=1191s&ab_channel=CodeHelp-byBabbar
//? question : https://leetcode.com/problems/letter-combinations-of-a-phone-number/