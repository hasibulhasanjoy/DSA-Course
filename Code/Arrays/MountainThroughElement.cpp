#include <bits/stdc++.h>
using namespace std;
void print_all_through_index(vector<int> v, int n)
{
    if (v[0] < v[1])
    {
        cout << "0 ";
    }
    bool f = true;
    // when the array is increasing f is true and when the array is decreasing f is false
    for (int i = 0; i < n - 1; i++)
    {
        if (f)
        {
            if (v[i] < v[i + 1])
            {
                continue;
            }
            else
            {
                f = false;
            }
        }
        if (!f)
        {
            if (v[i] > v[i + 1])
            {
                continue;
            }
            else
            {
                cout << i << " ";
                f = true;
            }
        }
    }
    if (v[n - 1] < v[n - 2])
    {
        cout << n - 1;
    }
    cout << endl;
}
void another_approach(vector<int> v, int n)
{
    if (v[0] < v[1])
    {
        cout << "0 ";
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] < v[i - 1] and v[i] < v[i + 1])
        {
            cout << i << " ";
        }
    }
    if (v[n - 1] < v[n - 2])
    {
        cout << n - 1;
    }
}
int main()
{
    vector<int> peak = {1, 2, 3, 2, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 3, 4, 5, 6, 5, 4, 3, 2};
    print_all_through_index(peak, peak.size());
    another_approach(peak, peak.size());
    return 0;
}