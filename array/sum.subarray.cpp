#include <bits/stdc++.h>
using namespace std;

vector<int> subArraySum(int arr[], int n, int sum)
{
    int currentSum = 0;
    int start = -1;
    int end = -1;
    for (int i = 0; i < n; i++)
    {
        if (currentSum < sum)
        {
            currentSum += arr[i];
        }
        while (currentSum > sum)
        {
            start++;
            currentSum -= arr[start];
        }
        if (currentSum == sum)
        {
            end = i;
            break;
        }
    }
    vector<int> v;
    if(end!=-1 && start!=-1){
        v.push_back(start);
        v.push_back(end);
    }
    else{
        v.push_back(-1);
    }
    return v;
}
int main()
{
    int arr[] = {1 ,2, 3 ,4};
    vector<int> v=subArraySum(arr, 4, 1);

    for(auto num:v){
        cout<<num<<" ";
    }
}