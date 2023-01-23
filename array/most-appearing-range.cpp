#include <bits/stdc++.h>
using namespace std;

int mostAppearing(vector<int> lArray, vector<int> rArray)
{
    int maxValue =INT_MIN;
    int size = lArray.size();

    for(int i=0;i<size;i++){
        if(maxValue<rArray[i]){
            maxValue = rArray[i];
        }
    }
    vector<int> prefixArray(maxValue + 1, 0);
    for (int i = 0; i < size; i++)
    {
        prefixArray[lArray[i]]++;
        prefixArray[rArray[i] + 1]--;
    }

    for(int i=0;i<=maxValue;i++){
      prefixArray[i]+=prefixArray[i-1];
    }
    int res =0;
    for(int i=0;i<=maxValue;i++){
      if(prefixArray[i]>res){
        res = i;
      }
    }

    return res;
}

int main()
{
    vector<int> lArray={1,2,5,15};
    vector<int> rArray={5,8,7,18};
    cout<<mostAppearing(lArray,rArray);
}