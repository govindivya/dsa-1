#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

vector<pair<int, int>> merge(vector<pair<int, int>> &arr)
{
    sort(arr.begin(), arr.end(), compare);
    vector<pair<int, int>> v1;
    v1.push_back(make_pair(arr[0].first, arr[0].second));
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i].first > v1.back().second)
        {
            v1.push_back(make_pair(arr[i].first, arr[i].second));
        }
        else if ((arr[i].first <= v1.back().second) && (arr[i].second > v1.back().second))
        {
            int first = v1.back().first;
            int second = arr[i].second;
            v1.pop_back();
            v1.push_back(make_pair(first, second));
        }
    }
    for (auto it : v1)
    {
        cout << it.first << " " << it.second << "\n";
    }
    return v1;
}
int main()
{
    vector<pair<int, int>> arr;
    arr = {{1, 7}, {2, 4}, {2, 6}, {8, 9}, {8, 10}, {9, 11}, {15, 18}, {16, 17}};
    vector<pair<int, int>> ans = merge(arr);
}