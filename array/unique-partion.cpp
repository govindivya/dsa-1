#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    unordered_map<char, int> my_map;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        my_map[s[i]] = i;
    }

    int mx = -1;
    for (int i = 0; i < s.length(); i++)
    {
        mx = max(my_map[s[i]], mx);
        if (mx == i)
        {
            count++;
        }
    }

    cout << count << "\n";
}
