#include <bits/stdc++.h>
using namespace std;
void fastAndLast(string s, int n);
int i = -1;
bool f = false;
int j = -1;
int main()
{
    string s = "abaacdaefaah";
    int n = 0;
    fastAndLast(s, n);
    return 0;
}
void fastAndLast(string s, int n)
{
    if (s[n] == 'a' and f)
        i = n;
    if (s[n] == 'a' and !f)
    {
        j = n;
        f = true;
    }
    if (n == s.length())
    {
        cout << i << " " << j << endl;
        return;
    }
    fastAndLast(s, n + 1);
}