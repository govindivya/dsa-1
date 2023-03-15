#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    unordered_map<int, int> mp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (mp.find(nums[i]) != mp.end())
        {
            mp[nums[i]] += 1;
        }
        else
        {
            mp[nums[i]] = 1;
        }
    }

    vector<int> vp;
    for (auto num : mp)
    {
        if (num.second > n / 3)
        {
            vp.push_back(num.first);
        }
    }

    return vp;
}
int main()
{
    vector<int> vp = {3, 2, 3};
    majorityElement(vp);
}