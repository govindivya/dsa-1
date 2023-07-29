#include <bits/stdc++.h>
using namespace std;

bool check_pair_sum(vector<int> arr, int sum)
{
    int i = -1;
    int j = -1;

    sort(arr.begin(), arr.end());

    int start = 0;
    int end = arr.size() - 1;
    vector<int> result;

    while (start < end)
    {
        int currentSum = arr[start] + arr[end];
        if (currentSum == sum)
        {
            result.push_back(start);
            result.push_back(end);
            cout<<arr[start]<<" "<<arr[end]<<endl;
            return true;
        }
        if (currentSum < sum)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return false;
}
int main()
{
    vector<int> arr={1,3,2,9,6,4};
    cout<<check_pair_sum(arr,5)<<endl;
}