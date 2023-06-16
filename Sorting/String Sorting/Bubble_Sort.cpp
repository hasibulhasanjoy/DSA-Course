#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    string s[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < 10; i++)
    {
        bool isSorted = true;
        for (int j = 0; j < 10 - i; j++)
        {
            if (s[j] > s[j + 1])
            {
                swap(s[j], s[j + 1]);
                isSorted = false;
            }
        }
        if (isSorted)
        {
            break;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << s[i] << endl;
    }
    return 0;
}