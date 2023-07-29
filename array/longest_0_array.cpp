#include <bits/stdc++.h>
using namespace std;

int longest_zero_sum(vector<int> nums)
{
    int len = 0;

    for (int i = 1; i < nums.size(); i++)
    {
        nums[i] += nums[i - 1];
    }
    unordered_map<int, int> mp;
    mp.insert(make_pair(0, -1));
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.find(nums[i]) != mp.end())
        {
            int temp_len = i - mp.at(nums[i]);
            len = max(len, temp_len);
        }
        else
        {
            mp.insert(make_pair(nums[i], i));
        }
    }
    return len;
}
int main()
{
    vector<int> nums = {1, 0, -5};
    cout << longest_zero_sum(nums) << endl;
}