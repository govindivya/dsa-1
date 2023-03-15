#include <bits/stdc++.h>
using namespace std;

string path = "";

bool IsSafe(vector<vector<int>> arr, vector<vector<bool>> back, int row, int col, int i, int j)
{
    if (i >= row || i < 0 || j < 0 || j >= col)
    {
        return false;
    }
    if (back[i][j])
    {
        return false;
    }
    if (arr[i][j] == 1)
    {
        return false;
    }
    return true;
}

bool flood(vector<vector<int>> &arr, vector<vector<bool>> &back, int row, int col, int i, int j)
{
    if (i == row - 1 && j == col - 1)
    {
        cout << path << "\n";
        return true;
    }
    back[i][j] = true;

    if (IsSafe(arr, back, row, col, i + 1, j))
    {
        path.append("d");
        if (flood(arr, back, row, col, i + 1, j))
        {
            path.pop_back();
        }
    }
    if (IsSafe(arr, back, row, col, i - 1, j))
    {
        path.append("u");
        if (flood(arr, back, row, col, i - 1, j))
        {
            path.pop_back();
        }
    }
    if (IsSafe(arr, back, row, col, i, j + 1))
    {
        path.append("r");
        if (flood(arr, back, row, col, i, j + 1))
        {
            path.pop_back();
        }
    }

    if (IsSafe(arr, back, row, col, i, j - 1))
    {
        path.append("l");
        if (flood(arr, back, row, col, i, j - 1))
        {
            path.pop_back();
        }
    }
    back[i][j] = false;
    return true;
}

int main()
{
    vector<vector<int>> arr = {{0, 1, 0, 0, 0, 0, 0},
                               {0, 1, 0, 1, 1, 1, 0},
                               {0, 0, 0, 0, 0, 0, 0},
                               {1, 0, 1, 1, 0, 1, 1},
                               {1, 0, 1, 1, 0, 1, 1},
                               {1, 0, 0, 0, 0, 0, 0}};

    vector<vector<bool>> back;

    for (int i = 0; i < 6; i++)
    {
        vector<bool> a;
        back.push_back(a);
        for (int j = 0; j < 7; j++)
        {
            back[i].push_back(false);
        }
    }
    back[0][0] = true;

    flood(arr, back, 6, 7, 0, 0);
}