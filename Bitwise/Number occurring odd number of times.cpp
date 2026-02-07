#include <bits/stdc++.h>
using namespace std;

int get_odd_occurrence(vector<int>& arr){
    int xor_result=0;
    for(int i=0;i<arr.size();i++){
        xor_result^=arr[i];
    }
    return xor_result;
}

int main(){
    vector<int> arr={1,2,3,2,3,1,3};
    cout<<get_odd_occurrence(arr);
    return 0;
}
