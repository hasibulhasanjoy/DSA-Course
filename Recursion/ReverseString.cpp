#include <bits/stdc++.h>
using namespace std;
void reverse(string &s, int i, int j)
{
    if (i > j)
        return;
    swap(s[i], s[j]);
    reverse(s, ++i, --j);
}
int main()
{
    string s = "abcdef";
    int n = s.length() - 1;
    reverse(s, 0, n);
    cout << s << endl;
    return 0;
}
