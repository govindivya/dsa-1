#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1)
{
    vector<int> res;

    int n1 = nums1.size();
    for (int i = 0; i < n1; i++)
    {

        int greaterIndex = -1;
        int j = i + 1;
        while (j != i)
        {
            if (j >= n1)
            {
                j = 0;
            }
            if (nums1[j] > nums1[i])
            {
                greaterIndex = j;
                break;
            }
            j++;
        }
        if(greaterIndex==-1){
            res.push_back(-1);
        }
        else{
            res.push_back(nums1[greaterIndex]);
        }
    }
    for (auto v : res)
    {
        cout << v << endl;
    }
    return res;
}
int main()
{
    vector<int> v1 = {1,2,3,4,3};
    nextGreaterElement(v1);
}