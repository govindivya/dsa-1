#include <bits/stdc++.h>
using namespace std;

void merge(int array[], int const left, int const mid, int const right)
{
   int arr[right-left+1];
   int i=left;
   int j=mid+1;

   for(int k=0;k<=right-left;k++){
    if(i<=mid&&(j>right || array[i]<=array[j])){
      arr[k]=array[i++];
    }
    else{
        arr[k]=array[j++];
    }
   }
   for(int k=0;k<=right-left;k++){
    array[k+left]=arr[k];
   }
}
void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}