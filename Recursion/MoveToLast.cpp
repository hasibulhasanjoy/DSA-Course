#include <bits/stdc++.h>
using namespace std;
string moveToLast(string s, int n, char c);
string s1, s2;
int main()
{
    string s = "axbcxxd";
    int n = 0;
    char c = 'x';
    string newString = moveToLast(s, n, c);
    cout << newString << endl;
    return 0;
}

string moveToLast(string s, int n, char c)
{
    if (s[n] != c)
    {
        s1.push_back(s[n]);
    }
    else
    {
        s2.push_back(s[n]);
    }
    if (n == s.length() - 1)
    {
        return s1 + s2;
    }
    return moveToLast(s, n + 1, c);
}