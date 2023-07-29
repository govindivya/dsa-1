#include <bits/stdc++.h>
using namespace std;

int total = 0;
void recursionSubset(string s, int n)
{
    if (n == s.length())
    {
        if (s == "")
        {
            cout << "\"\""
                 << "\n";
        }
        else
            cout << s << "\n";
        return;
    }
    total++;
    // passing n as we reducing the size by removing char
    recursionSubset(s.substr(0, n) + s.substr(n + 1), n);
    // passing n as we are not reducing the size
    recursionSubset(s, n + 1);
}

string binary(string s, int n)
{
    string bin = "";

    int i = 0;
    while (n)
    {
        if (n & 1)
        {
            bin += "1";
        }
        else
        {
            bin += "0";
        }
        i++;
        n = n >> 1;
    }
    reverse(bin.begin(), bin.end());
    while (bin.length() < s.length())
    {
        bin = "0" + bin;
    }
    return bin;
}

void subsets(string s)
{
    for (int i = 0; i <= pow(2, s.length()) - 1; i++)
    {
        string bin = binary(s, i);
        for (int i = 0; i < s.length(); i++)
        {
            if (bin[i] == '1')
            {
                cout << s[i];
            }
        }
        cout << "\n";
    }
}
int main()
{
    subsets("abcd");
}