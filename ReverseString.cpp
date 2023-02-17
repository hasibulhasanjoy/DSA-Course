#include <bits/stdc++.h>
using namespace std;
void reverse(string s, int n);
int main()
{
    string s = "abcdef";
    int n = s.length() - 1;
    reverse(s, n);
}
void reverse(string s, int n)
{
    cout << s[n];
    if (n == 0)
    {
        return;
    }
    reverse(s, n - 1);
}