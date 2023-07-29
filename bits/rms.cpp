#include <bits/stdc++.h>
using namespace std;
int rms(int n)
{
    int i = -1;
    while (n)
    {
        n = n >> 1;
        i++;
    }
    return i;
}
int main()
{
    cout << rms(12) << endl;
}