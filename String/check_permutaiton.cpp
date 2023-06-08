// ? link: https://leetcode.com/problems/permutation-in-string/submissions/947602876/

#include <bits/stdc++.h>
using namespace std;
bool checkInclusionBruteForce(string s1, string s2)
{
    int n = s1.length();
    int m = s2.length();
    unordered_map<char, int> mp1;
    for (int i = 0; i < n; i++)
    {
        mp1[s1[i]]++;
    }
    for (int i = 0; i <= m - n; i++)
    {
        unordered_map<char, int> mp2;
        int cnt = n;
        int j = i;
        bool flag = true;
        // take a substring of length n each iteration and count character frequency
        while (cnt--)
        {
            mp2[s2[j++]]++;
        }
        // if count(s1[i]) = count(s2[i]) then it is a valid permutation
        for (int k = 0; k < n; k++)
        {
            if (mp1[s1[k]] != mp2[s1[k]])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            return true;
        }
    }
    return false;
}
bool checkCount(unordered_map<char, int> &m1, unordered_map<char, int> &m2)
{
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (m1[i] != m2[i])
        {
            return false;
        }
    }
    return true;
}
bool checkInclusion(string s1, string s2)
{
    int n = s1.length();
    int m = s2.length();
    unordered_map<char, int> mp1;
    for (int i = 0; i < n; i++)
    {
        mp1[s1[i]]++;
    }
    int j = 0;
    unordered_map<char, int> mp2;
    while (j < n and j < s2.length())
    {
        mp2[s2[j]]++;
        j++;
    }
    if (checkCount(mp1, mp2))
    {
        return true;
    }
    while (j < s2.length())
    {
        mp2[s2[j]]++;
        mp2[s2[j - n]]--;
        j++;
        if (checkCount(mp1, mp2))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string s1 = "ab";
    string s2 = "eidboaoo";
    bool c = checkInclusionBruteForce(s1, s2);
    bool d = checkInclusion(s1, s2);
    cout << d << endl;
    cout << c << endl;
    return 0;
}