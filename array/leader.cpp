#include <bits/stdc++.h>
using namespace std;

void printLeadersBruteForce(int arr[], int n)
{

    int max_till = arr[n - 1];
    cout<<arr[n-1]<<endl;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >max_till)
        {
            cout << arr[i] << endl;
        }
        max_till = max(max_till, arr[i]);
    }
}
int main()
{
    int arr1[] = {4, 7, 1, 0};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "The leaders of the first array are: " << endl;
    printLeadersBruteForce(arr1, n1);

    int arr2[] = {10, 22, 12, 3, 0, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "The leaders of the second array are: " << endl;
    printLeadersBruteForce(arr2, n2);
}