#include <bits/stdc++.h>
using namespace std;


int maxWater(int arr[], int n)
{
    if (n <= 2)
    {
        return 0;
    }

    int lMaxArray[n]={0};
    int rMaxArray[n]={0};
    int res = 0;
    lMaxArray[0]=arr[0];
    rMaxArray[n-1]=arr[n-1];
  

    for (int i = 1; i < n; i++)
    {
       lMaxArray[i]=max(lMaxArray[i-1],arr[i]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
       rMaxArray[i]=max(arr[i],rMaxArray[i+1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << lMaxArray[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << rMaxArray[i] << " ";
    }
    cout<<endl;
    for(int i=1;i<n-1;i++){
        res+=max(0,min(rMaxArray[i],lMaxArray[i])-arr[i]);
    }
    return res;
}
int main()
{
    int arr[] = {10, 1, 5, 12, 3, 9, 1, 20, 6, 1};
    cout<<maxWater(arr, 10)<<endl;
}