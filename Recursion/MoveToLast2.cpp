#include <bits/stdc++.h>
using namespace std;
void moveToLast(string s, int n, char c);
int cnt = 0;
string newString;
int main()
{
    string s = "axbcxxd";
    int n = 0;
    char c = 'x';
    moveToLast(s, n, c);
    cout << newString << endl;
    return 0;
}

void moveToLast(string s, int n, char c)
{
    if (s[n] == c)
    {
        cnt++;
    }
    else
    {
        newString.push_back(s[n]);
    }
    if (n == s.length() - 1)
    {
        for (int i = 0; i < cnt; i++)
        {
            newString.push_back(c);
        }
        return;
    }
    moveToLast(s, n + 1, c);
}