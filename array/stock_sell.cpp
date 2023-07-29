#include <bits/stdc++.h>
using namespace std;

int profit_hard_2_transaction(int arr[], int n)
{
    int max_profit = 0;
    int min_value = arr[0];
    int buyDay = 0;
    int sellDay = 0;
    for (int i = 1; i < n; i++)
    {
        int diff = arr[i] - min_value;
        if (diff > 0)
        {
            if (diff > max_profit)
            {
                max_profit = diff;
                sellDay = i;
            }
        }
        if (arr[i] < min_value)
        {
            min_value = arr[i];
            buyDay = i;
        }
    }

    for (int i = sellDay + 1; i < n; i++)
    {
        int diff = arr[i] - min_value;
        if (diff > 0)
        {
            if (diff > max_profit)
            {
                max_profit = diff;
                sellDay = i;
            }
        }
        if (arr[i] < min_value)
        {
            min_value = arr[i];
            buyDay = i;
        }
    }
    return max_profit;
}

int maxProfit(vector<int> &arr)
{
    int max_profit = 0;
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] < arr[i])
        {
            max_profit += arr[i] - arr[i - 1];
        }
    }
    return max_profit;
}

int oneday_profit(int arr[], int n)
{
    int max_profit = 0;
    int min_value = arr[0];
    for (int i = 1; i < n; i++)
    {
        int diff = arr[i] - min_value;
        if (diff > 0)
        {
            if (diff > max_profit)
            {
                max_profit = diff;
            }
        }
        if (arr[i] < min_value)
        {
            min_value = arr[i];
        }
    }
    return max_profit;
}

vector<int> oneday_profit_days(int arr[], int n)
{
    int max_profit = 0;
    int min_value = arr[0];
    int buyDay = 0;
    int sellDay = 0;
    for (int i = 1; i < n; i++)
    {
        int diff = arr[i] - min_value;
        if (diff > 0)
        {
            if (diff > max_profit)
            {
                max_profit = diff;
                sellDay = i;
            }
        }
        if (arr[i] < min_value)
        {
            min_value = arr[i];
            buyDay = i;
        }
    }
    vector<int> days;
    days.push_back(buyDay);
    days.push_back(sellDay);
    return days;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << profit_hard_2_transaction(arr, 5) << endl;
}