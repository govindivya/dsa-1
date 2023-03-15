#include <bits/stdc++.h>
using namespace std;

vector<int> getRow(int rowIndex)
{
    vector<vector<int>> arr;
    for (int i = 1; i <= rowIndex + 1; i++)
    {
        vector<int> v(i, 0);
        v[0] = 1;
        v[i - 1] = 1;
        arr.push_back(v);
    }
    for (int i = 2; i <= rowIndex; i++)
    {
        for (int j = 1; j < i; j++)
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    return arr[arr.size()-1];
}
int main()
{
    getRow(3);
}