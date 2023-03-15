#include <bits/stdc++.h>
using namespace std;

int maximumProduct(vector<int> &nums)
{
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    int n = nums.size();
    int min1Index = -1;
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int maxIndex = -1;
    int maxIndex2 = -1;
    int max3 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (min1 >= nums[i])
        {
            min1 = nums[i];
            min1Index = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (min2 >= nums[i] && min1Index != i)
        {
            min2 = nums[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (max1 <= nums[i])
        {
            max1 = nums[i];
            maxIndex = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (max2 <= nums[i] && maxIndex != i)
        {
            max2 = nums[i];
            maxIndex2=i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (max3 <= nums[i] && maxIndex2!=i && maxIndex!=i)
        {
            max3 = nums[i];
        }
    }
   cout<<min1<<" "<<min2<<" "<<max3<<" "<<max2<<" "<<max1<<endl;
   return max(min1*min2*max1,max1*max2*max3);
}
int main()
{
    vector<int> v = {-9, 0, -9, 5, 9,2};
    cout<<maximumProduct(v)<<endl;
}