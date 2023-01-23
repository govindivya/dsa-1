#include <bits/stdc++.h>
using namespace std;

// divide array into max chunk  such that if we sort each chunk we get sorted array
int countMaxChunk(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    int maxValue = arr[0];
    int chunk = 0;
    for (int i = 0; i < n; i++)
    {
        maxValue = max(maxValue, arr[i]);
        if (maxValue <= i)
        {
            chunk++;
        }
    }
    return chunk;
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1, 0};
    cout << countMaxChunk(arr, 6) << "\n";
}