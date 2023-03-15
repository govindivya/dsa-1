#include <bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int n)
{
    if(n==0){
        return true;
    }
    if(n==1){
        return false;
    }
    int bitCount = 0;
    int n1 = n;
    int pos =0;
    int i = 0;
    while (n1)
    {
        i++;
        if (n1 & 1)
        {
            bitCount++;
            pos = i;
        }
        n1 = n1 >> 1;
    }
    if (bitCount != 1)
    {
        return false;
    }
    if (pos % 2)
    {
        return true;
    }
    return false;
}
int main()
{
    for(int i=0;i<=64*4;i++){
        if(isPowerOfFour(i)){
            cout<<i<<" ";
        }
    }
}