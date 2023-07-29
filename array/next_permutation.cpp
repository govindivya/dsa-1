#include <bits/stdc++.h>
using namespace std;

string swapString(string s, int i, int j)
{
    char c1 = s[i];
    s[i] = s[j];
    s[j] = c1;
    return s;
}

string nextPermutation(string s)
{
    int i = s.length() - 2;
    int k = s.length() - 1;

    while (i >= 0)
    {
        if (s[i] < s[i + 1])
        {
            break;
        }
        i--;
    }
    if (i < 0)
    {
        return "";
    }
    while (k >= i)
    {
        if (s[k] > s[i])
        {
            s = swapString(s, i, k);
            break;
        }
        k--;
    }
    cout << "k: " << k << "\n";
    cout << "s: " << s << "\n";
    string s1 = s.substr(0, i + 1);
    string s2 = s.substr(i + 1);
    reverse(s2.begin(), s2.end());
    return s1 + s2;
}

int main()
{

    cout << nextPermutation("4312");
}