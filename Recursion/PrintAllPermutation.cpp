#include <bits/stdc++.h>
using namespace std;

void generatePermutation(string &s, vector<string> &ans, int index)
{
    if (index >= s.length())
    {
        ans.push_back(s);
        return;
    }
    for (int i = index; i < s.size(); i++)
    {
        swap(s[index], s[i]);
        generatePermutation(s, ans, index + 1);
        swap(s[i], s[index]);
    }
}
vector<string> permutations(string &str)
{
    vector<string> ans;
    generatePermutation(str, ans, 0);
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    string s = "abc";
    vector<string> ans = permutations(s);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
//? question : https://www.codingninjas.com/codestudio/problems/permutations-of-a-string_985254
//? video : https://www.youtube.com/watch?v=va3NEycUxsg&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=43&ab_channel=CodeHelp-byBabbar