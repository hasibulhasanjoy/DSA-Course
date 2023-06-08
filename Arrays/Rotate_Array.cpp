#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = arr.size();
    int k = 2;                             //! NUMBER OF ROTATION
    k = k % n;                             //* FOR CIRCULAR ROTATION. IF K = 3 OR 11 THEN IT WILL ROTATE 3 TIMES AS 11%8 = 3
    int x = n - k;                         //! ENDING INDEX OF FIRST ROTATION
    reverse(arr.begin(), arr.begin() + x); //* REVERSE FROM 0 TO N - K - 1 INDEX
    reverse(arr.end() - k, arr.end());     //! REVERSE FORM N - K TO END
    reverse(arr.begin(), arr.end());       //* ROTATE THE ARRAY GIVEN TIMES
    for (auto value : arr)
    {
        cout << value << " ";
    }
    return 0;
}
//? Time : O(n)
//? space : o(1)