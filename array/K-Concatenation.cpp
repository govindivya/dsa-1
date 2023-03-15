#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b)
{
    return (a < b);
}
int kadane(vector<int> arr)
{
    int n = arr.size();
    int maxSum = INT_MIN;
    int currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }
    return maxSum;
}

int kConcatenationMaxSum(vector<int> &arr, int k)
{
    if (k == 1)
    {
        return kadane(arr);
    }
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    vector<int> arr1(2 * arr.size());
    for (int i = 0; i < 2 * arr.size(); i++)
    {
        arr1[i] = arr[i % arr.size()];
    }
    if (sum < 0 || k == 2)
    {
        return kadane(arr1);
    }
    int res = kadane(arr1);
    return res + (k - 2) * sum;
}

int main()
{
    vector<int> arr = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    cout << kConcatenationMaxSum(arr, 100000) << endl;
}