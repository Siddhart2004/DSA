#include<bits/stdc++.h>
using namespace std;

int minElements(vector<int>& arr){
    int totalSum=0;
    for(int x:arr) totalSum+=x;
    sort(arr.begin(),arr.end(),greater<int>());
    int currSum=0,cnt=0;
    for(int x:arr){
        currSum+=x;
        cnt++;
        if(currSum>totalSum-currSum)
            return cnt;
    }
    return cnt;
}
int main(){
    vector<int> arr={3,1,7,1};
    cout<<minElements(arr)<<endl;
    return 0;
}
