#include <bits/stdc++.h>
using namespace std;

bool sortRow(const vector<float> &v1, const vector<float> &v2)
{
    return v1[0] < v2[0];
}

int carFleet(int target, vector<int> &position, vector<int> &speed)
{
    int n = position.size();
    vector<vector<float>> arr;

    for (int i = 0; i < n; i++)
    {
        vector<float> v;
        v.push_back(position[i]);
        v.push_back((float)((target * 1.0 - position[i] * 1.0) / speed[i]));
        arr.push_back(v);
    }
    sort(arr.begin(), arr.end(), sortRow);
    int count = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        cout << arr[i][1] << " " << arr[i + 1][1] << endl;
        if (arr[i][1] <= arr[i + 1][1])
        {
            arr[i][1] = arr[i + 1][1];
            continue;
            ;
        }
        else
        {
            count++;
        }
    }

    return count;
}
int main()
{
    int target = 10;
    vector<int> position = {6, 8};
    vector<int> speed = {3, 2};
    cout << carFleet(target, position, speed) << endl;
}