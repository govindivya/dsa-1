#include<bits/stdc++.h>
using namespace std;




void twoSum(int arr[],int n,int target){
    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
       int val=arr[i];
       int left = target-val;
       if(mp.find(left)!=mp.end()){
          cout<<i<<" ,"<<mp.at(left);
          return;
       }
       else{
        mp.insert({arr[i],i});
       }
    }
}

int main()
{
    int arr[]={4,1,6,3,1,5,7,9};
    twoSum(arr,8,10);
}