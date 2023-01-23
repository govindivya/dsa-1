#include <bits/stdc++.h>
using namespace std;

// break array into two part such that all elements in left array are lesser than the elements of right array.
int partition(int arr[], int n)
{
    //  holds max value upto ith index from left
    int arr1[n];
    // holds min value upto ith index from right
    int arr2[n];
    arr1[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr1[i] = max(arr1[i - 1], arr[i]);
    }
    arr2[n - 1] = arr[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        arr2[i] = min(arr[i], arr[i + 1]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr1[i] <= arr2[i + 1])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {8, 7, 6, 5, 4, 3, 2, 1};
    cout << partition(arr, 8) << "\n";
}