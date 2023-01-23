#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int n, int r,int k)
{
    const int MAX_SIZE = 100000;

    vector<int> arr1(MAX_SIZE, 0);
    for (int i = 0; i < n; i++)
    {
        arr1[arr[i]]++;
    }
    int j = -1;
    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (arr1[i] != 0)
        {
            j++;
            if (j == k - 1)
            {
                return i;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {7 ,10 ,4 ,3 ,20 ,15};
    cout << kthSmallest(arr, 6,5, 3);
}