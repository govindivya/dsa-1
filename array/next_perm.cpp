#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int i = nums.size() - 2;
    while (i >=0)
    {
        if (nums[i] < nums[i + 1])
        {
            break;
        }
        i--;
    }
    cout<<i<<endl;
    if (i < 0)
    {
        reverse(nums.begin(), nums.end());
        return;
    }

    int k = nums.size() - 1;
    while (k > i)
    {
        if (nums[k] > nums[i])
        {
            swap(nums[k], nums[i]);
            break;
        }
        k--;
    }
    vector<int> v1;
    for (int j = i + 1; j < nums.size(); j++)
    {
        v1.push_back(nums[j]);
    }
    reverse(v1.begin(), v1.end());
    for (int j = 0; j < v1.size(); j++)
    {
        nums[j + i + 1] = v1[j];
    }
}

int main()
{
    vector<int> v1 = {3,2,1};
    nextPermutation(v1);
    for (int v : v1)
    {
        cout << v << " ";
    }
}