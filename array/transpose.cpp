#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<vector<int>> transpose;

    for(int j=0;j<cols;j++){
        vector<int> vp;
        for(int i=0;i<rows;i++){
            vp.push_back(matrix[i][j]);
        }
        transpose.push_back(vp);
    }

    return transpose;

}
int main()
{
}