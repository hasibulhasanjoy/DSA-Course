#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
void subSequence(string s, int i, string sub)
{
    if (i == s.length())
    {
        if (mp[sub] == 0)
        {
            cout << sub << endl;
            mp[sub] = 1;
        }
        return;
    }
    char currentCharacter = s[i];
    subSequence(s, i + 1, sub + currentCharacter);
    subSequence(s, i + 1, sub);
}
int main()
{
    string s = "abcd";
    int i = 0;
    subSequence(s, i, "");
    return 0;
}