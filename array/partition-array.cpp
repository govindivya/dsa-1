#include <bits/stdc++.h>
using namespace std;

int partitionArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> left(n, 0);
    vector<int> right(n, 0);

    left.at(0) = (nums[0]);
    right.at(n - 1) = nums[n - 1];

    for (int i = 1; i < n; i++)
    {
        left.at(i) = (max(left[i - 1], nums[i]));
    }
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = (min(nums[i], right[i + 1]));
    }

    for (int i = 0; i < n; i++)
    {
        // cout<<left[i]<< " "<<right[i]<<endl;
        if (left[i]<=right[i+1])
        {
            return i+1;
        }
    }
    return 0;
}
int main()
{

    vector<int> s = {5, 0, 3, 8, 6};
    cout << partitionArray(s);
}