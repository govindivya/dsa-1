// formula (2l+1);

// l = most significant set bit of given number ;

#include <bits/stdc++.h>
using namespace std;

int josephus(int n)
{
    int i = 1;
    while (i < n)
    {
        i = i * 2;
    }
    i=i/2;
    int l = n - i;
    return 2 * l + 1;
}
int main()
{
    cout << josephus(10) << endl;
}
