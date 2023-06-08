#include <bits/stdc++.h>
using namespace std;
void phoneKeyPad(string digit, string output, int index, vector<string> &ans, string mapping[]);
int main()
{
    string digit = "23";
    string output = "";
    int index = 0;
    vector<string> ans;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    phoneKeyPad(digit, output, index, ans, mapping);
    for (auto combination : ans)
    {
        cout << combination << endl;
    }
    return 0;
}
void phoneKeyPad(string digit, string output, int index, vector<string> &ans, string mapping[])
{
    if (index == digit.length())
    {
        ans.push_back(output);
        return;
    }
    int number = digit[index] - '0';
    string value = mapping[number];
    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        phoneKeyPad(digit, output, index + 1, ans, mapping);
        output.pop_back();
    }
}