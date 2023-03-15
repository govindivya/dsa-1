#include <bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParity(vector<int> &nums)
{
    vector<int> v1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 2 == 0)
        {
            v1.push_back(nums[i]);
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 2 != 0)
        {
            v1.push_back(nums[i]);
        }
    }
    return v1;
}
int main()
{
}