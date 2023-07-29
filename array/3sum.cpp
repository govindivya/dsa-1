#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(int arr[], int start, int end, int target)
{
    unordered_map<int, int> mp;
    vector<int> num;
    for (int i = start; i < end; i++)
    {
        int val = arr[i];
        int left = target - val;
        if (mp.find(left) != mp.end())
        {
            num.push_back(i);
            num.push_back(mp.at(left));
            break;
        }
        else
        {
            mp.insert({arr[i], i});
        }
    }
    return num;
}

vector<int> threeSum(int arr[],int n, int target)
{
    vector<int> num;
    for(int i=0;i<n;i++){
         int value = arr[i];
         vector<int> temp = twoSum(arr,i+1,n,target-value);
         if(temp.size()>0){
            num.push_back(i);
            num.push_back(temp[0]);
            num.push_back(temp[1]);
            break;
         }
    }
    for(auto val:num){
        cout<<val<<endl;
    }
    return num;
}

int main()
{
    int arr[] = {4, 1, 6, 3, 1, 5, 7, 9};
    threeSum(arr,8,13);
}