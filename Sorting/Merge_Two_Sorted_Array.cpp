#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char **argv)
{
    int arr1[] = {1, 3, 5, 7, 9, 0, 0, 0};
    int arr2[] = {2, 4, 6, 8, 10, 11, 12, 13};
    int len1 = 5 + 3;
    int len2 = 8;
    int index1 = 0;
    int index2 = 0;
    vector<int> output;
    while (index1 < len1 and index2 < len2)
    {
        if (arr1[index1] == 0)
        {
            index1++;
            continue;
        }
        if (arr1[index1] <= arr2[index2])
        {
            output.push_back(arr1[index1++]);
        }
        else
        {
            output.push_back(arr2[index2++]);
        }
    }
    int i = index1;
    while (i < len1)
    {
        output.push_back(arr1[i++]);
    }
    int j = index2;
    while (j < len2)
    {
        output.push_back(arr2[j++]);
    }
    for (auto v : output)
    {
        cout << v << " ";
    }
    return 0;
}