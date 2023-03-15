#include<bits/stdc++.h>
using namespace std;

void sortIt(int arr[],int n){
    int count1=0;
    int count2=0;
    int count3=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count1++;
        }
        else if(arr[i]==1){
            count2++;
        }
        else{
            count3++;
        }
    }
    for(int i=0;i<count1;i++){
        arr[i]=0;
    }
    for(int i=count1;i<count2+count1;i++){
        arr[i]=1;
    }
    for(int i=count1+count2;i<count1+count2+count3;i++){
        arr[i]=2;
    }
}
int main()
{
    int arr[]={0,1,0,1,1,1,2,2,0,1,2,2,0,0,1};
    sortIt(arr,15);
    for(int i=0;i<15;i++){
        cout<<arr[i]<<" ";
    }
}