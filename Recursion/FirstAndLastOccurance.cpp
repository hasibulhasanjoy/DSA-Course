#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abaacdaefaah";
    bool f = false;
    int x = -1;
    for (int i = 0; s[i]; i++)
    {
        if (!f and s[i] == 'a')
        {
            cout << i << endl;
            f = true;
        }
        else if (f and s[i] == 'a')
        {
            x = i;
        }
    }
    if (x > -1)
        cout << x << endl;
}