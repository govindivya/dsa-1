#include <bits/stdc++.h>
using namespace std;

int maxChunksToSorted(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1)
    {
        return 1;
    }
    vector<int> v(n, 0);
    vector<int> v1(n, 0);
    v.at(0) = arr[0];
    v1.at(n - 1) = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        v.at(i) = max(v[i - 1], arr[i]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        v1.at(i) = min(v1[i + 1], arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v1[i+1] >=v[i])
        {
            count++;
        cout << v[i] << " " << v1[i+1] << endl;

        }
    }
    return count + 1;
}

int main()
{
    vector<int> arr = {7,3,6,1,11,8,9,12,13,15,18,19,12};
    cout << maxChunksToSorted(arr);
}