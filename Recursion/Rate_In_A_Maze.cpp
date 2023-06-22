#include <bits/stdc++.h>
using namespace std;
bool canVisit(int x, int y, int n, vector<vector<bool>> &visited, vector<vector<int>> &m)
{
    if ((x >= 0 and x < n) and (y >= 0 and y < n) and visited[x][y] == 0 and m[x][y] == 1)
    {
        return true;
    }
    return false;
}
void findPath(vector<vector<int>> &m, int n, vector<string> &allPath, int x, int y,
              vector<vector<bool>> visited, string path)
{
    if (x == n - 1 and y == n - 1)
    {
        allPath.push_back(path);
        return;
    }
    visited[x][y] = true;
    // Down
    int newX = x + 1;
    int newY = y;
    if (canVisit(newX, newY, n, visited, m))
    {
        path.push_back('D');
        findPath(m, n, allPath, newX, newY, visited, path);
        path.pop_back();
    }
    // Left
    newX = x;
    newY = y - 1;
    if (canVisit(newX, newY, n, visited, m))
    {
        path.push_back('L');
        findPath(m, n, allPath, newX, newY, visited, path);
        path.pop_back();
    }
    // Right
    newX = x;
    newY = y + 1;
    if (canVisit(newX, newY, n, visited, m))
    {
        path.push_back('R');
        findPath(m, n, allPath, newX, newY, visited, path);
        path.pop_back();
    }
    // up
    newX = x - 1;
    newY = y;
    if (canVisit(newX, newY, n, visited, m))
    {
        path.push_back('U');
        findPath(m, n, allPath, newX, newY, visited, path);
        path.pop_back();
    }
    visited[x][y] = false;
}
vector<string> generatePath(vector<vector<int>> &m, int &n)
{
    vector<string> allPath;
    int srcX = 0;
    int srcY = 0;
    if (m[0][0] == 0)
    {
        return allPath;
    }
    // Initialize a 2d vector and assign all value with false
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    string path = "";
    findPath(m, n, allPath, srcX, srcY, visited, path);
    sort(allPath.begin(), allPath.end());
    return allPath;
}
int main()
{
    int n = 4;
    vector<vector<int>> m = {{1, 0, 0, 0},
                             {1, 1, 0, 1},
                             {1, 1, 0, 0},
                             {0, 1, 1, 1}};
    vector<string> path = generatePath(m, n);
    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i] << endl;
    }
    return 0;
}

//? video : https://www.youtube.com/watch?v=GqtyVD-x_jY&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=44&t=3s&ab_channel=CodeHelp-byBabbar
//? question : https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1