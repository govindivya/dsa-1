#include <bits/stdc++.h>
using namespace std;

int majority_element(int arr[], int n)
{

    int count = 0;
    int element = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            element = arr[i];
        }
        if (arr[i] == element)
            count++;
        else
            count--;
    }
    return element;
}
int main()
{
    int arr[] = {4, 2, 1, 2, 4, 2, 2, 0, 1, 2, 2, 2, 2};
    cout << majority_element(arr, 13) << endl;
}