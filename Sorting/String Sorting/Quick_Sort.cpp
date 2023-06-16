#include <bits/stdc++.h>
using namespace std;

int partition(string *s, int start, int end)
{
    string pivot = s[start];
    int lessThenPivot = 0;
    for (int i = start; i <= end; i++)
    {
        if (s[i] < pivot)
            lessThenPivot++;
    }
    int pivotIndex = start + lessThenPivot;
    swap(s[start], s[pivotIndex]);
    int i = start, j = end;
    while (i < j and i < pivotIndex and j > pivotIndex)
    {
        if (s[i] >= pivot and s[j] <= pivot)
        {
            swap(s[i++], s[j--]);
            continue;
        }
        if (s[i] <= pivot)
            i++;
        if (s[j] >= pivot)
            j--;
    }
    return pivotIndex;
}

void quickSort(string *s, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int p = partition(s, start, end);
    quickSort(s, start, p - 1);
    quickSort(s, p + 1, end);
}

int main()
{
    freopen("input.txt", "r", stdin);
    string s[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> s[i];
    }
    int start = 0, end = 9;
    quickSort(s, start, end);
    cout << "After sorting : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << s[i] << endl;
    }
    return 0;
}