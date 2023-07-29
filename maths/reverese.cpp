#include <bits/stdc++.h>
using namespace std;
int revereNum(int num)
{
    int rev = 0;
    while (num)
    {
        rev = (10 * rev + num % 10);
        num /= 10;
    }
    return rev;
}
int main()
{
    int rev = revereNum(8973773);
    cout << rev << endl;
}