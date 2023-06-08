#include <bits/stdc++.h>
using namespace std;
int romanToInt(string s)
{
    int ans = 0;
    int i = 0;
    int ii = 0, iv = 0, v = 0, l = 0, c = 0, d = 0, m = 0, ix = 0, x = 0, xl = 0, xc = 0, cd = 0, cm = 0;
    while (s[i])
    {
        if (s[i] == 'I' and s[i + 1] == 'V')
        {
            iv++;
            i += 2;
            continue;
        }
        else if (s[i] == 'I' and s[i + 1] == 'X')
        {
            ix++;
            i += 2;
            continue;
        }
        else if (s[i] == 'X' and s[i + 1] == 'L')
        {
            xl++;
            i += 2;
            continue;
        }
        else if (s[i] == 'X' and s[i + 1] == 'C')
        {
            xc++;
            i += 2;
            continue;
        }
        else if (s[i] == 'C' and s[i + 1] == 'D')
        {
            cd++;
            i += 2;
            continue;
        }
        else if (s[i] == 'C' and s[i + 1] == 'M')
        {
            cm++;
            i += 2;
            continue;
        }
        else if (s[i] == 'I')
        {
            ii++;
            i++;
            continue;
        }
        else if (s[i] == 'V')
        {
            v++;
            i++;
            continue;
        }
        else if (s[i] == 'X')
        {
            x++;
            i++;
            continue;
        }
        else if (s[i] == 'L')
        {
            l++;
            i++;
            continue;
        }
        else if (s[i] == 'C')
        {
            c++;
            i++;
            continue;
        }
        else if (s[i] == 'D')
        {
            d++;
            i++;
            continue;
        }
        else if (s[i] == 'M')
        {
            m++;
            i++;
            continue;
        }
    }
    ans = (1 * ii) + (4 * iv) + (5 * v) + (9 * ix) + (10 * x) + (40 * xl) + (50 * l) + (90 * xc) + (100 * c) + (400 * cd) + (500 * d) + (900 * cm) + (1000 * m);
    return ans;
}
int main()
{
    string s = "CMXCIX";
    cout << romanToInt(s);
}