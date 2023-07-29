#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> nums)
{
    if (nums.size() == 0)
    {
        return 0;
    }
    
    set< int > hashSet;
    for(int num:nums){
        hashSet.insert(num);
    }

    int max_count  = 1;

    for(int num:nums){
        if(!hashSet.count(num-1)){
            int count = 1;
            int value = num;

            while(hashSet.count(num+1)){
                count++;
                num++;
            }
            if(count>max_count){
                max_count=count;
            }
        }
    }
    return max_count;

}
int main()
{
    vector<int> arr{100, 200, 1, 2, 3, 4};
    int lon = longestConsecutive(arr);
    cout << "The longest consecutive sequence is " << lon << endl;
}