#include <bits/stdc++.h>
using namespace std;

pair<int, int> kadanesIndex(int arr[], int n)
{
    int maxSum = INT_MIN;
    int currentSum = 0;
    int startIndex = 0;
    int endIndex = 0;
    for (int i = 0; i < n; i++)
    {
        int num=-arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
            startIndex = i;
        }
        currentSum +=num;
        if (maxSum < currentSum)
        {
            maxSum = currentSum;
            endIndex = i;
        }
    }
    // cout<<startIndex<<" "<<endIndex<<"\n";
    return make_pair(startIndex, endIndex);
}
int kadanes(vector<int> arr, int n)
{
    int maxSum = INT_MIN;
    int currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        currentSum += arr[i];
        if (maxSum < currentSum)
        {
            maxSum = currentSum;
        }
    }
    return maxSum;
}

int solve(int arr[], int n)
{
    pair<int,int> p = kadanesIndex(arr,n);
    int startIndex=p.first;
    int endIndex=p.second;
    // cout<<startIndex<<" "<<endIndex<<"\n";

    vector<int> b;
    int i=0;
    while(i<n){
      if(i<startIndex||i>endIndex){
        b.push_back(arr[i]);
      }
      i++;
    }
    return kadanes(b,b.size());
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout<<solve(arr,n)<<"\n";
    }
}