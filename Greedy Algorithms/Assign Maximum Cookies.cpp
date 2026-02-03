#include<bits/stdc++.h>
using namespace std;

int maxChildren(vector<int>& greed,vector<int>& cookie){
    sort(greed.begin(),greed.end());
    sort(cookie.begin(),cookie.end());
    int i=0,j=0,cnt=0;
    while(i<greed.size() && j<cookie.size()){
        if(greed[i]<=cookie[j]){
            cnt++;
            i++;
            j++;
        }else{
            j++;
        }
    }
    return cnt;
}
int main(){
    vector<int> greed={1,10,3};
    vector<int> cookie={1,2,3};
    cout<<maxChildren(greed,cookie);
    return 0;
}
