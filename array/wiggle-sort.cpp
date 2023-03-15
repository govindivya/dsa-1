#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    int start = 0, end = n - 1;
    int arr2[n];
    int j = 0;
    while (start < end)
    {
        arr2[j] = arr[start];
        arr2[j + 1] = arr[end];
        start++;
        end--;
        j += 2;
    }
    if (n % 2)
    {
        arr2[n - 1] = arr[start];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ,";
    }
}
