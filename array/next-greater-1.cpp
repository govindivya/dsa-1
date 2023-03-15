#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> res;

    int n1 = nums1.size();
    int n2 = nums2.size();
    for (int i = 0; i < n1; i++)
    {
        int sameIndex = -1;
        int greaterIndex = -1;
        for (int j = 0; j < n2; j++)
        {
            if(nums1[i]==nums2[j]){
                sameIndex=j;
            }
        }
        if(sameIndex==-1){
            res.push_back(-1);
            continue;
        }
        for(int k=sameIndex+1;k<n2;k++){
            if(nums2[k]>nums2[sameIndex]){
                greaterIndex = k;
                break;
            }
        }
        if(greaterIndex==-1){
             res.push_back(-1);
             continue;
        }
        res.push_back(nums2[greaterIndex]);
    }
    for(auto v:res){
        cout<<v<<endl;
    }
    return res;
}
int main()
{
    vector<int> v1 = {4, 1, 2};
    vector<int> v2 = {1, 3, 4, 2};
    nextGreaterElement(v1, v2);
}