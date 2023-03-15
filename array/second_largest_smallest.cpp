#include <bits/stdc++.h>
using namespace std;

int second_largest_number(int arr[], int n)
{
    int second_largest = INT_MIN;
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest=largest;
            largest = arr[i];
        }
    }
    return second_largest;
}
int main()
{
    int arr[]={4,0,4,2,8,12,19,20};
    cout<<second_largest_number(arr,8)<<endl;
}