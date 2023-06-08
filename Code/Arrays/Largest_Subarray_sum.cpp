//! Find the length of the largest sub array which sum equal to K
//? link: https://www.youtube.com/watch?v=yDeNqw_dAU0&ab_channel=GeeksforGeeksPractice

#include <bits/stdc++.h>
using namespace std;

int findLargestSubArrayLength(vector<int> v, int k)
{
    map<int, int> m;
    int length = 0;
    int n = v.size();
    m[0] = -1; // initially prefix sum of array 0 is at -1 index
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (m.find(sum - k) != m.end())
        {
            length = max(length, i - m[sum - k]);
        }
        if (m.find(sum) == m.end())
        {
            m[sum] = i;
        }
    }
    return length;
}
int main()
{
    vector<int> v = {5, -2, 2, -8, 1, 7, 10, 23};
    int k = 15;
    cout << findLargestSubArrayLength(v, k) << endl;
    return 0;
}