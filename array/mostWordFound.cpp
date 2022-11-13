#include<bits/stdc++.h>
using namespace std;


int mostWordsFound(vector<string> & sentences){
    int maxCount=0;
    for(int i=0;i<sentences.size();i++){
        int count=0;
       for(int j=0;j<sentences[i].length();j++){
         if(sentences[i][j]==' '){
            count++;
         }
       }
       if(count>maxCount){
        maxCount=count;
       }
    }
    return maxCount+1;
}
int main()
{
    vector<string> v={"A cow is big","Ramu is good","There is a monkey in hospital and train"};
    cout<<mostWordsFound(v);
}