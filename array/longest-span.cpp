#include <bits/stdc++.h>
using namespace std;

void longestSpan(int arr1[], int arr2[], int n)
{
    int arr3[n];
    for (int i = 0; i < n; i++)
    {
        arr3[i] = arr1[i] - arr2[i];
    }
    for (int i = 1; i < n; i++)
    {
        arr3[i] += arr3[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr3[i] << " ";
    }
    int max_lenght = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(arr3[i]) == mp.end())
        {
            mp[arr3[i]] = i;
        }
        else
        {
        }
    }
    // cout << max_lenght << endl;
}

int main()
{
    int Arr1[] = {0, 1, 0, 0, 0, 0, 0, 1};
    int Arr2[] = {1, 0, 1, 0, 0, 0, 0, 1};
    longestSpan(Arr1, Arr2, 8);
}