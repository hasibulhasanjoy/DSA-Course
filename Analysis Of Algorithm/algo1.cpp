#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define MMX INT_MAX
#define MMN INT_MIN
#define loop(i, a, b) for (int i = a; i <= b; i++)
#define ff first
#define ss second
#define bgg begin()
#define enn end()
#define all(v) v.begin(), v.end()
#define pb push_back
#define sz size()
#define print(x) cout << x << endl
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define uo unordered
#define each(v) for (auto value : v)
#define testCase \
    int t;       \
    cin >> t;    \
    while (t--)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // !ONLINE_JUDGE
    int cnt = 0;
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            for (int k = j + 1; k <= n; k++)
            {
                cnt++;
            }
        }
    }
    cout << "count : " << endl;
    print(cnt);
    // (n ^ 3) / 6 + n ^ 2 / 2 + n / 3 return 0;
}
/*
    Hasibul Hasan
    Department of CSE
    University of Rajshahi
    Session : 2020 - 2021
*/