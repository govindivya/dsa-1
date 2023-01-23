#include <bits/stdc++.h>
using namespace std;

bool isLongPressedName(string name, string typed)
{
    while (name.length())
    {
        if (name[0] != typed[0])
        {
            return false;
        }
        int count1 = 1;
        int count2 = 1;
        int i = 1;
        while (i < name.length() && name[0] == name[i])
        {

            count1++;
            i++;
        }
        name = name.substr(count1);
        i = 1;
        while (i < typed.length() && typed[0] == typed[i])
        {
            count2++;
            i++;
        }
        if (count2 < count1)
        {
            return false;
        }
        typed = typed.substr(count2);
    }
    if (typed.length() != 0)
    {
        return false;
    }
    return true;
}
int main()
{
    cout << isLongPressedName("saeed", "ssaaedd") << "\n";
}