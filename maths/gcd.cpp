#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0||b==0){
        return max(a,b);
    }
    if(a>b){
        return gcd(a%b,b);
    }
    return gcd(a,b%a);
}
int main()
{
    cout<<gcd(30,20);
}