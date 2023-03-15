#include <bits/stdc++.h>
using namespace std;

int minDiffrence(int arr[], int m, int n)
{
    if (n < m)
        return -1;
    if (m == 0 || n == 0)
        return 0;

    sort(arr, arr + n);
    int res = INT64_MAX;

    for (int i = 0; i + m < n; i++)
    {
        
    }
}

int main()
{
}