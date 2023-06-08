#include <bits/stdc++.h>
using namespace std;
void duplicate(string s, int n);
string newS;
vector<int> cnt('z' - 'a' + 1);
int main()
{
    string s = "abbccdaefeeffgghhh";
    int n = 0;
    duplicate(s, n);
    cout << newS << endl;
    return 0;
}
void duplicate(string s, int n)
{
    if (cnt[s[n] - 'a'] == 0)
    {
        newS.push_back(s[n]);
        cnt[s[n] - 'a']++;
    }
    if (n == s.length() - 1)
    {
        return;
    }
    duplicate(s, n + 1);
}