#include <bits/stdc++.h>
using namespace std;

int count_set_bits(int n)
{
    int i = 0;
    while (n)
    {
        if (n & 1)
        {
            i++;
        }
        n = n >> 1;
    }
    return i;
}
int main()
{
    cout << count_set_bits(16) << endl;
}