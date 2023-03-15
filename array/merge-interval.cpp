#include <bits/stdc++.h>
using namespace std;

bool compare(vector<int> v1, vector<int> v2)
{
    return v1[0] < v2[0];
}

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end(), compare);
    vector<vector<int>> merged;

    merged.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); i++)
    {
        if (intervals[i][0] <= merged.at(merged.size()-1)[1])
        {
            int first = merged.at(merged.size()-1)[0];
            int second = max(merged.at(merged.size()-1)[1], intervals[i][1]);
            if(merged.size()){
                merged.pop_back();
            }
            vector<int> v1 = {first, second};
            merged.push_back(v1);
        }
        else
        {
            merged.push_back(intervals[i]);
        }
    }
    return merged;
}
int main()
{
    vector<vector<int>> intervals = {{1, 4}, {0,2},{3,5}};
    merge(intervals);
}