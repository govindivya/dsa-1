#include<bits/stdc++.h>
using namespace std;

int countXOR(vector<int> nums,int k){
    int count = 0;
    for(int i=1;i<nums.size();i++){
        nums[i]^=nums[i-1];
    }
    unordered_map<int,int> mp;
    mp.insert(make_pair(0,-1));

    for(int i=0;i<nums.size();i++){
        
    }
}
int main()
{
}