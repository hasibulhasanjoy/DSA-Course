#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 40;
    vector<bool> prime(n + 1, true);
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i < n + 1; i++)
    {
        if (prime[i])
        {
            for (int j = i * 2; j < n + 1; j = j + i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i < n + 1; i++)
    {
        if (prime[i])
        {
            cout << i << " ";
        }
    }
    return 0;
}