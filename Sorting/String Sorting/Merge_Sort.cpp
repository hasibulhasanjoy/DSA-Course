#include <bits/stdc++.h>
using namespace std;

void sortAndMerge(string *s, int start, int end, int mid)
{
    int len = end - start + 1;
    string *temp = new string[len];
    int i = start, j = mid + 1;
    int index = 0;
    while (i <= mid and j <= end)
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
    while (j <= end)
    {
        temp[index++] = s[j++];
    }
    for (int i = 0; i < len; i++)
    {
        s[start + i] = temp[i];
    }
    delete[] temp;
}

void mergeSort(string *s, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    mergeSort(s, start, mid);
    mergeSort(s, mid + 1, end);
    sortAndMerge(s, start, end, mid);
}

int main()
{
    freopen("input.txt", "r", stdin);
    string s[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> s[i];
    }
    cout << "Before Sorting : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << s[i] << endl;
    }
    cout << endl;
    mergeSort(s, 0, 9);
    cout << "After Sorting : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << s[i] << endl;
    }
    return 0;
}