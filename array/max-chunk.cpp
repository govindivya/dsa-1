#include <bits/stdc++.h>
using namespace std;

int maxChunksToSorted(vector<int> &arr)
{
    int maxNow = arr[0];
    int n = arr.size();
    if (n == 1)
    {
        return 1;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        maxNow = max(maxNow, arr[i]);
        if (maxNow <= i)
        {
            count++;
        }
    }

    return count;
}
int main()
{
    vector<int> v = {1, 0, 2, 3, 4};
    cout<<maxChunksToSorted(v)<<endl;
}