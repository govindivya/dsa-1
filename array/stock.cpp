#include <bits/stdc++.h>
using namespace std;

int maxProfit(int arr[], int n)
{
    int maxProfit = 0;
    int minPrice = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        minPrice = min(minPrice, arr[i]);
        maxProfit = max(maxProfit, arr[i] - minPrice);
    }
    return maxProfit;
}
int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int maxPro = maxProfit(arr,6);
    cout << "Max profit is: " << maxPro << endl;
}