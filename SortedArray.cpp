#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> v,int n);
int main()
{
    return 0;
}

bool isSorted(vector<int> v, int n)
{
    bool f = true;
    if(v[n-1]>v[n])
    {
        f = false;;
    }
    if(n==0 and )
    {
        return true;
    }
    else
    {
        return false;
    }
    isSorted(v,n-1);
}