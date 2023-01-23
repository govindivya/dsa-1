#include <bits/stdc++.h>
using namespace std;



int majorityElement(vector<int> &nums)
{
    int count = 0;
    int candidate = 0;

    for (int num : nums)
    {
        if (count == 0)
        {
            candidate = num;
        }
        if (num == candidate)
            count += 1;
        else
            count -= 1;
    }

    return candidate;
}

int main()
{
    vector<int> nums={2,1,3,2,2,2,4,2,2,5,2,2,2,1,7,5};
    cout<<majorityElement(nums)<<"\n";

}