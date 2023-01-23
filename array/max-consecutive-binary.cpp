#include <bits/stdc++.h>
using namespace std;

int countMaxConsecutiveOnes(int arr[], int n)
{
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1){
            int j = i+1;
            int tempRes = 1;
            while(j<n && arr[j]){
                j++;
                tempRes++;
            }
            res = max(res,tempRes);
            i = j;
        }
    }
    return res;
}
int main()
{
    int arr[] = {1,0,1,1,0,1};
    cout <<countMaxConsecutiveOnes(arr,6) << endl;
}