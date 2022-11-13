#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



ll kadanes(int arr[], int n)
{
    ll maxSum = INT_MIN;
    ll currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        currentSum += arr[i];
        if (maxSum < currentSum)
        {
            maxSum = currentSum;
        }
    }
    return maxSum;
}

void solve(int arr[], int n, int k)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if (k == 1)
    {
        cout << kadanes(arr, n) << "\n";
        return;
    }
    int b[n * 2];
    for (int i = 0; i < n * 2; i++)
    {
        b[i] = arr[i % n];
    }
    if (sum < 0)
    {
        cout << kadanes(b, n * 2) << "\n";
        return ;
    }
    else
    {

        cout << kadanes(b, n * 2) + sum * (k - 2) << "\n";
        return ;
        
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr,n,k);
    }
}