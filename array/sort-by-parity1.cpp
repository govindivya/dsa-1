#include <bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParityII(vector<int> &nums)
{
    vector<int> v1(nums.size());
    int even = 0;
    int odd = 1;
    for (int i = 0; i < nums.size() && even < nums.size(); i++)
    {
        if (nums[i] % 2 == 0)
        {
            v1.at(even)=nums[i];
            even+=2;
        }
    }
    for (int i = 0; i < nums.size() && odd<nums.size(); i++)
    {
        if (nums[i] % 2 != 0)
        {
           v1.at(odd)=nums[i];
            odd+=2;
        }
    }
    return v1;
}

int main()
{
}