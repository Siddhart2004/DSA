#include <bits/stdc++.h>
using namespace std;

double findMedian(int a[],int n,int b[],int m){
    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(a[i]);
    }
    for(int i=0;i<m;i++){
        v.push_back(b[i]);
    }
    sort(v.begin(),v.end());
    int k=v.size();
    if(k%2){
        return v[k/2];
    }
    return (v[k/2-1]+v[k/2])/2.0;
}
int main(){
    int a[]={1,3};
    int b[]={2};
    cout<<findMedian(a,2,b,1);
}
