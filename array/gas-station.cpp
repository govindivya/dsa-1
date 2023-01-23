#include <bits/stdc++.h>
using namespace std;

int Solve(int gas[], int cost[], int n)
{
    int gasSum = 0;
    int costSum = 0;
    for (int i = 0; i < n; i++)
    {
        gasSum += gas[i];
    }
    for (int i = 0; i < n; i++)
    {
        costSum += cost[i];
    }
    if (costSum > gasSum)
    {
        return -1;
    }

    int total = 0;
    int result = 0;

    for (int i = 0; i < n; i++)
    {
        total += gas[i] - cost[i];
        if (total < 0)
        {
            total = 0;
            result = i + 1;
        }
    }
    return result;
}

int main()
{
    int gas[] = {1, 2, 3, 4, 9};
    int cost[] = {3, 4, 5, 5, 2};
    cout << Solve(gas, cost, 5) << "\n";
}