#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s[6] = {"agjoij", "cljgoi", "eghi", "bofgoa", "dggfah", "fogjoiag"};
    int mid = 5 / 2;
    int i = 0, j = mid + 1;
    string temp[6] = {""};
    int index = 0;
    while (i <= mid and j <= 5)
    {
        if (s[i] < s[j])
        {
            temp[index++] = s[i++];
        }
        else
        {
            temp[index++] = s[j++];
        }
    }
    while (i <= mid)
    {
        temp[index++] = s[i++];
    }
    while (j <= 5)
    {
        temp[index++] = s[j++];
    }
    for (int i = 0; i < 6; i++)
    {
        cout << temp[i] << endl;
    }
    return 0;
}