#include <bits/stdc++.h>
using namespace std;

bool sortRow(const vector<int> &v1, const vector<int> &v2)
{
    return v1[0] < v2[0];
}
vector<double> getCollisionTimes(vector<vector<int>> &cars)
{
    int n = cars.size();
    vector<double> timeArray(n);
    vector<int> reducedSpeed(n);
    vector<double> distanceArray(n, 0);
    distanceArray[n - 1] = 0;
    for (int i = 0; i < n; i++)
    {
        reducedSpeed[i] = cars[i][1];
    }
    timeArray[n - 1] = -1.00000;

    for (int i = n - 2; i >= 0; i--)
    {
        if (i == n - 2)
        {
            if (cars[i][1] > cars[i + 1][1])
            {
                double d = ((cars[i + 1][0] - cars[i][0]) * cars[i + 1][1]) * 1.00000 / (cars[i][1] - cars[i + 1][1]);
                distanceArray[i] = d;
                double t = d / cars[i + 1][1];
                timeArray[i] = t;
                reducedSpeed[i] = reducedSpeed[i + 1];
            }
            else
            {
                timeArray[i] = -1.00000;
            }
        }
        else
        {
            if (reducedSpeed[i] > reducedSpeed[i + 1])
            {
                double d1 = (((cars[i + 1][0] - cars[i][0]) * cars[i + 1][1]) * 1.00000) / (cars[i][1] - cars[i + 1][1]);
                double t1 = d1 / cars[i + 1][1];
                if (t1 <= timeArray[i + 1])
                {
                    timeArray[i] = t1;
                    reducedSpeed[i] = reducedSpeed[i + 1];
                    distanceArray[i] = d1;
                }
                else
                {
                    double p1 = reducedSpeed[i] * timeArray[i + 1]+cars[i][0];
                    double p2 = distanceArray[i + 1]+cars[i+1][0];

                    double d2 = ((p2 - p1) * 1.00000) / (reducedSpeed[i] - reducedSpeed[i + 1]);
                    double t2 = d2 / reducedSpeed[i + 1];
                    reducedSpeed[i] = reducedSpeed[i + 1];
                    distanceArray[i] = d2 + distanceArray[i + 1];

                    timeArray[i] = timeArray[i + 1] + t2;
                }
            }
            else
            {

                timeArray[i] = -1.00000;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << timeArray[i] << "  ";
    }
    return timeArray;
}
int main()
{
    vector<vector<int>> cars = {{3, 4}, {5, 4}, {6, 3}, {9, 1}};
    getCollisionTimes(cars);
}