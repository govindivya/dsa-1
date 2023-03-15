#include <bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void reverseRows(vector<vector<int>> &matrix)
{

    int rows = matrix.size();
    for (int i = 0; i < rows; i++)
    {
        int start = 0;
        int end = rows - 1;

        while (start < end)
        {
            int temp = matrix[i][end];
            matrix[i][end] = matrix[i][start];
            matrix[i][start] = temp;
            start++;
            end--;
        }
    }
}

void rotate(vector<vector<int>> &matrix)
{
    transpose(matrix);
    reverseRows(matrix);
}
int main()
{
}