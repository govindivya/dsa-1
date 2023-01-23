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

int main()
{
    int arr[] = {0, 1, 1, 0, 0, 2, 0, 2, 1, 0, 2};
    sortWithoutAlgo(arr, 11);
    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << " ,";
    }
}