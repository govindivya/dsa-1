#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{

    int rows = matrix.size(), cols = matrix[0].size();
    vector<pair<int, int>> zero;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                zero.push_back(make_pair(i, j));
            }
        }
    }

    for (auto pair : zero)
    {
        int row = pair.first;
        int col = pair.second;

        for (int i = 0; i < cols; i++)
        {
            matrix[row][i] = 0;
        }

        for (int i = 0; i < rows; i++)
        {
            matrix[i][col] = 0;
        }
    }
}
int main()
{
    vector<vector<int>> arr;
    arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    setZeroes(arr);
    cout << "The Final Matrix is " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}