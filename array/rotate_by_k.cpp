#include <bits/stdc++.h>
using namespace std;

void rotate_array(int arr[], int n, int d)
{
    d = d % n;
    vector<int> copy_array;
    for (int i = n - d; i < n; i++)
    {
        copy_array.push_back(arr[i]);
    }
    for (int i = 0; i < n - d; i++)
    {
        copy_array.push_back(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = copy_array[i];
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    rotate_array(arr,10,5);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<", ";
    }
}