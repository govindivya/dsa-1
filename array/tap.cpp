#include <bits/stdc++.h>
using namespace std;

int maximum(int n1, int n2)
{
    return n1 > n2 ? n1 : n2;
}

int maxArea(vector<int> &height)
{
    int n = height.size();
    int maxArea = 0;
    int i = 0, j = n - 1;
    while (i < j)
    {
        int width = j - i;
        int area = width * (min(height[i], height[j]));
        if (area > maxArea)
        {
            maxArea = area;
        }
        if (height[i] > height[j])
        {
            j--;
        }
        else if (height[i] < height[j])
        {
            i++;
        }
        else
        {
            i++;
            j--;
        }
    }
    return maxArea;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << maxArea(arr);
    // 1 8 6 2 5 4 8 3 7
}