#include <bits/stdc++.h>
using namespace std;

void sortWithoutAlgo(int a[], int n)
{
    int low = 0;
    int high = n - 1;
    int mid = 0;

    while (mid <= high)
    {
        switch (a[mid])
        {

        case 0:
            swap(a[low++], a[mid++]);
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(a[mid], a[high--]);
            break;
        }
    }
}

void sort012(int arr[], int n)
{
    int start = 0;
    int mid = 0;
    int end = n - 1;

    while (mid <= end)
    {
        switch (arr[mid])
        {
        case 0:
        {
            swap(arr[start++], arr[mid++]);
            break;
        }
        case 1:
        {
            mid++;
            break;
        }
        case 2:
        {
            swap(arr[mid], arr[end--]);
            break;
        }
        }
    }
}

int main()
{
    int arr[] = {0, 1, 1, 0, 0, 2, 0, 2, 1, 0, 2};
    sort012(arr, 11);
    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << " ,";
    }
}