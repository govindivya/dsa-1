#include <bits/stdc++.h>
using namespace std;

int kadanes(int arr[], int n)
{
    int max_sum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        currentSum += arr[i];

        if (currentSum > max_sum)
        {
            max_sum = currentSum;
        }
    }
    return max_sum;
}
void kadanes_print(int arr[], int n)
{
    int max_sum = INT_MIN;
    int currentSum = 0;

    int lastIndex = 0;
    int currentIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (currentSum < 0)
        {
            currentSum = 0;
            lastIndex = i;
        }
        currentSum += arr[i];

        if (currentSum > max_sum)
        {
            max_sum = currentSum;
            currentIndex=i;
        }
    }
    cout<<lastIndex<<" "<<currentIndex<<endl;
    return ;
}
int main()
{
    int arr[]={4,-1,2,-6,-5,2,6};
    cout<<kadanes(arr,4)<<endl;
    kadanes_print(arr,7);
}