#include <bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;
    int countElement = 0;
    int totalElement = row * col;
    vector<int> ans;
    while (countElement < totalElement)
    {
        // print starting row
        for (int i = startingCol; countElement < totalElement and i <= endingCol; i++)
        {
            ans.push_back(matrix[startingRow][i]);
            countElement++;
        }
        startingRow++;
        // print ending col
        for (int i = startingRow; countElement < totalElement and i <= endingRow; i++)
        {
            ans.push_back(matrix[i][endingCol]);
            countElement++;
        }
        endingCol--;
        // print ending row
        for (int i = endingCol; countElement < totalElement and i >= startingCol; i--)
        {
            ans.push_back(matrix[endingRow][i]);
            countElement++;
        }
        endingRow--;
        // print starting col
        for (int i = endingRow; countElement < totalElement and i >= startingRow; i--)
        {
            ans.push_back(matrix[i][startingCol]);
            countElement++;
        }
        startingCol++;
    }
    return ans;
}
int main()
{
    vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    vector<int> ans = spiralOrder(mat);
    for (auto value : ans)
    {
        cout << value << " ";
    }
    return 0;
}

// link : https://leetcode.com/problems/spiral-matrix/submissions/953449728/