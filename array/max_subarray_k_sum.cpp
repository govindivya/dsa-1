#include <bits/stdc++.h>
using namespace std;

int max_subarray(int arr[], int n, int k)
{

    int sum = 0;
    int lastIndex = -1;
    int len = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        sum += arr[i];

        int j = lastIndex;
        while (sum > k)
        {
            lastIndex++;
            j = lastIndex;
            sum -= arr[lastIndex];
        }
        if (sum == k)
        {
            if ((i - lastIndex) > len)
            {
                len = i - lastIndex;
            }
        }
    }
    return len;
}

int main()
{
    int arr[]={6,3,7,2,2,3,1,2};
    cout<<max_subarray(arr,8,10)<<endl;
}