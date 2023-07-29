#include <bits/stdc++.h>
using namespace std;

vector<int> partitionLabels(string s)
{
    unordered_map<char, int> mp;
    vector<int> v;
    for (int i = 0; i < s.length(); i++)
    {
        if (mp.find(s[i]) == mp.end())
        {
            mp.insert(make_pair(s[i], i));
        }
        else
        {
            mp.at(s[i]) = i;
        }
    }
    int size = 0;
    int maxTill = -1;
    for (int i = 0; i < s.size(); i++)
    {

        maxTill = max(maxTill, mp.at(s[i]));
        size++;
        if (maxTill == i)
        {
            v.push_back(size);
            maxTill = -1;
            size = 0;
        }
    }
    for (auto num : v)
    {
        cout << num << " ";
    }
    return v;
}
int main()
{
    string s = "caedbdeddaffg";
    partitionLabels(s);
}