#include <bits/stdc++.h>
using namespace std;

//  flip all consecutive item and count as 1
// count all interval of 1 which contains consective 1 similary for 0;
// check which is greater on
// e.g {0,0,0,1,1,1,0,0,0} clearly it has two intervals of 0 and one interval of 1
// so min is 1
// return 1
int flip(int arr[], int n)
{
    int count_1 = 0;
    int count_2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            int j = i + 1;
            int tempRes = 1;
            while (j < n && arr[j])
            {
                j++;
                tempRes++;
            }
            count_1++;
            i = j;
        }
        else if (arr[i] == 0)
        {
            int j = i + 1;
            int tempRes = 1;
            while (j < n && !arr[j])
            {
                j++;
                tempRes++;
            }
            count_2++;
            i = j;
        }
    }
    return min(count_1,count_2);
}
int main()
{
    int arr[]={0,0,1,0,0,0,1,0,0,1,1,1,1,0,0};
    cout<<flip(arr,15);
}