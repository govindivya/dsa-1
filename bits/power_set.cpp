#include <bits/stdc++.h>
using namespace std;


void generateSubsets(string s)
{

    for (int i = 0; i < pow(2, s.length()); i++)
    {
        int num = i;
        string s1 = "";
        int j = 0;
        while (num)
        {
            if (num & 1)
            {
                s1 += s[j];
            }
            num = num >> 1;
            j++;
        }
        cout << s1 << "\n";
    }
}

int main()
{
    generateSubsets("abcd");
}