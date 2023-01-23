#include <bits/stdc++.h>
using namespace std;

double MedianOfArrays(vector<int> &array1, vector<int> &array2)
{
    vector<int> mergedArray;
    int i = 0;
    int j = 0;
    int size1 = array1.size();
    int size2 = array2.size();
    while (i < size1 && j < size2)
    {
        if (array1[i] < array2[j])
        {
            mergedArray.push_back(array1[i++]);
        }
        else
        {
            mergedArray.push_back(array2[j++]);
        }
    }
    while (i < size1)
    {
        mergedArray.push_back(array1[i++]);
    }
    while (j < size2)
    {
        mergedArray.push_back(array2[j++]);
    }

    int size = mergedArray.size();
    double median;
    if (size % 2)
    {
        median = mergedArray[size / 2];
    }
    else
    {
        median = (((double)(mergedArray[size / 2-1]) + (double)(mergedArray[size / 2])) / 2);
    }
    return median;
}

int main()
{
    vector<int> arr1 = {4, 6};
    vector<int> arr2 = {1, 2, 3, 5};
    cout << MedianOfArrays(arr1, arr2) << endl;
}