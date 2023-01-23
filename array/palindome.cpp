#include <bits/stdc++.h>
using namespace std;

void palindrone(vector<vector<string>> &vs, string s, int i,int k)
{
    vector<string> v;
    vs.push_back(v);
    if (s.length() == 0)
    {
        return;
    }
    for (int j = i; j < s.length(); j++)
    {
        string s1 = s.substr(0,j);
        string s2 = s.substr(j+1);
        reverse(s1.begin(), s1.end());
        
        if(s1==s2){
            vs[k].push_back(s1);
        }
        palindrone()

    }
    if(vs[k].size()==0){
        vs.pop_back();
    }
    return;
}

void countPalindrone(string s)
{
    vector<vector<string>> vs;
}

int main()
{
    countPalindrone("aabaa");
}