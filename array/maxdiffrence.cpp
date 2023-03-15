#include<bits/stdc++.h>
using namespace std;


int minDiff(int arr[],int n){
    int res = arr[1]-arr[0];
    int minValue = arr[0];
    for(int i=1;i<n;i++){
        res = max(res, arr[i]-minValue);
        minValue = min(minValue, arr[i]);
    }
    return res;
}
int main()
{
    int arr[] = {1,5,3,9,4,8,9,3,12,1,11,1,8,21};
    cout<<minDiff(arr,14)<<endl;
}