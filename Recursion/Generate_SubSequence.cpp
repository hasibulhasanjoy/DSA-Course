#include <bits/stdc++.h>
using namespace std;
void generateSubSequence(string &s, string &output, vector<string> &ans, int index)
{
    if (index == s.length())
    {
        ans.push_back(output);
        return;
    }
    // include
    char current = s[index];
    output.push_back(current);
    generateSubSequence(s, output, ans, index + 1);
    // exclude
    output.pop_back();
    generateSubSequence(s, output, ans, index + 1);
}

vector<string> subSequence(string &s)
{
    string output = "";
    vector<string> ans;
    int index = 0;
    generateSubSequence(s, output, ans, index);
    return ans;
}
int main()
{
    string s = "abc";
    vector<string> ans = subSequence(s);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}

//? question : https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16
//? vide : https://www.youtube.com/watch?v=V0IgCltYgg4&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=41&ab_channel=CodeHelp-byBabbar