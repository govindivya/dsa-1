#include <bits/stdc++.h>
using namespace std;

int myDivision(int dividend, int divisor)
{
    int result = 0;
    while (dividend >= divisor)
    {
        int temp = divisor;
        int count = 1;
        while (temp <= dividend)
        {
            temp <<= 1;
            count <<= 1;
        }
        result += count >> 1;
        dividend -= temp >> 1;
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    long long int product = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            product = arr[0];
        }
        else
        {
            product *= arr[i];
        }
    }
    for(int i=0;i<n;i++){
        arr[i]=myDivision(product,arr[i]);
    }
}