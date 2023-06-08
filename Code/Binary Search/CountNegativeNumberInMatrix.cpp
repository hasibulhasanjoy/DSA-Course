#include <bits/stdc++.h>
using namespace std;
int firstOccurrence(vector<vector<int>> &grid, int i)
{
    int s = 0;
    int e = grid[i].size() - 1;
    int index = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (grid[i][mid] < 0)
        {
            index = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return index;
}
int countNegatives(vector<vector<int>> &grid)
{
    int cnt = 0;
    int m = grid.size();
    for (int i = 0; i < m; i++)
    {
        int a = firstOccurrence(grid, i);
        int b = grid[i].size() - 1;
        if (a == -1)
        {
            continue;
        }
        else
        {
            int cntRow = (b - a) + 1;
            cnt += cntRow;
        }
    }
    return cnt;
}
int main()
{
    vector<vector<int>> grid = {{4, 3, 2, -1},
                                {3, 2, 1, -1},
                                {1, 1, -1, -2},
                                {-1, -1, -2, -3},
                                {-1, -1, -2, -3}};
    int ans = countNegatives(grid);
    cout << ans;
    return 0;
}