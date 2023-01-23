#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{

    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j < end; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    arr[end] = arr[i + 1];
    arr[i + 1] = pivot;
    return i + 1;
}

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int partionIndex = partition(arr, start, end);
        quickSort(arr, start, partionIndex - 1);
        quickSort(arr, partionIndex + 1, end);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}