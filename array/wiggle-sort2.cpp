#include <bits/stdc++.h>
using namespace std;

void wiggleSort(vector<int> &nums)
{
    int n = nums.size();
    int arr[n];
    sort(nums.begin(), nums.end());

    int count = n%2?n/2:n/2-1;

    for (int i = 0; i < n; i += 2)
    {
        arr[i] = nums[count];
        count--;
    }
    count = n-1;
    for (int i = 1; i < n; i += 2)
    {
        arr[i] = nums[count];
        count--;
    }
    for(int i=0;i<n;i++){
        nums[i]=arr[i];
    }
}

int main()
{
}