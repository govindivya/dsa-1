#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n] = {0};
    int q;
    cin >> q;
    while (q--)
    {
        int i, j, num;
        cin >> i >> j >> num;
        arr[i] += num;
        if (j < n - 1)
        {
            arr[j + 1] -= num;
        }
    }
    cout << arr[0] << " ,";
    for (int i = 1; i < n; i++)
    {
        arr[i] += arr[i - 1];
        cout << arr[i] << " ,";
    }
}