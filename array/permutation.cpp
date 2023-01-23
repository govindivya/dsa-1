#include <bits/stdc++.h>
using namespace std;

string swapString(string s, int i, int j)
{
    char c1 = s[i];
    s[i] = s[j];
    s[j] = c1;
    return s;
}

void permute(string s, int i)
{

    if (i == s.length() - 1)
    {
        cout << s << "\n";
        return;
    }
    for (int j = i; j < s.length(); j++)
    {
        permute(swapString(s, i, j), i + 1);
        swapString(s, i, j);
    }
}
int main()
{
    permute("123", 0);
}