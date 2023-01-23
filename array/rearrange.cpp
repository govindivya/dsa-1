#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    vector<int> arr1;
    vector<int> arr2;

   

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>= 0)
        {
            arr1.push_back(arr[i]);
        }
        else
        {
            arr2.push_back(arr[i]);
        }
    }

    int j=0;
    int k=0;
    for(int i=0;i<n;i++){
        if(i<arr1.size() && i<arr2.size()){
           if(i%2){
             arr[i]=arr2[k++];
           }
           else{
            arr[i]=arr1[j++];
           }
        }
        else if(i<arr1.size()){
            arr[i]=arr1[j++];
        }
        else if(i<arr2.size()){
            arr[i]=arr2[k++];
        }
    }
    
}
int main()
{
    int Arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
}