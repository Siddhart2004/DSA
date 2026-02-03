#include<bits/stdc++.h>
using namespace std;

int minimumCost(vector<int>& arr){
    int size=arr.size();
    int minimumValue=*min_element(arr.begin(),arr.end());
    return (size-1)*minimumValue;
}
int main(){
    vector<int> arr={4,3,2};
    cout<<minimumCost(arr);
    return 0;
}
