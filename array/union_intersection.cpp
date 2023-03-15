#include <bits/stdc++.h>
using namespace std;

vector<int> union_finder(vector<int> arr1, vector<int> arr2)
{
    vector<int> union_array;
    unordered_map<int, int> mp;

    for (int i = 0; i < arr1.size(); i++)
    {
        mp.insert(make_pair(arr1[i], arr1[i]));
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        mp.insert(make_pair(arr2[i], arr2[i]));
    }

    for (auto val : mp)
    {
        union_array.push_back(val.second);
    }
    return union_array;
}

vector<int> intersection_finder(vector<int> arr1, vector<int> arr2)
{
    vector<int> intersection_array;
    unordered_map<int, int> mp;
    unordered_map<int,int> mp1;

    for (int i = 0; i < arr1.size(); i++)
    {
        mp.insert(make_pair(arr1[i], arr1[i]));
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        if (mp.find(arr2[i])!=mp.end())
        {
           mp1.insert(make_pair(arr2[i],arr2[i]));
        }
    }
      for (auto val : mp1)
    {
        intersection_array.push_back(val.second);
    }
    return intersection_array;
}
int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> arr2 = {5, 6, 7, 8, 9, 10, 11, 12};
    vector<int> arr3 = union_finder(arr1, arr2);
    vector<int> arr4 = intersection_finder(arr1, arr2);
    for (auto val : arr3)
    {
        cout << val << ",";
    }
    cout << endl;
    for (auto val : arr4)
    {
        cout << val << ",";
    }
}