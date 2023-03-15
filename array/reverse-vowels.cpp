#include <bits/stdc++.h>
using namespace std;
string reverseVowels(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while (start < end)
    {
        bool startVowel = s[start] == 'a' || s[start] == 'e' || s[start] == 'i' || s[start] == 'o' || s[start] == 'u' || s[start] == 'A' || s[start] == 'E' || s[start] == 'I' || s[start] == 'O' || s[start] == 'U';
        bool endVowel = s[end] == 'a' || s[end] == 'e' || s[end] == 'i' || s[end] == 'o' || s[end] == 'u'||s[end] == 'A' || s[end] == 'E' || s[end] == 'I' || s[end] == 'O' || s[end] == 'U';
        if (startVowel && endVowel)
        {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
        else if (startVowel)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return s;
}
int main()
{
    string s = "leetcode";
    cout<<reverseVowels(s)<<endl;
}