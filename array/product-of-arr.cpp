#include <bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> v(n);
    vector<int> left(n);
    vector<int> right(n);
    left[0] = 1;
    right[n - 1] = 1;

    for (int i = 1; i < n; i++)
        left[i] = nums[i - 1] * left[i - 1];

    for (int j = n - 2; j >= 0; j--)
        right[j] = nums[j + 1] * right[j + 1];

    for (int i = 0; i < n; i++)
    {
        v[i] = left[i] * right[i];
    }
    return v;
}
int main()
{
    vector<int> v = {1, 2, 3, 4};
    productExceptSelf(v);
}