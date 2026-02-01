#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[]={6,5,3,2,8,10,9};
    int k=3;
    priority_queue<int,vector<int>,greater<int>> pq;
    int idx=0;
    for(int i=0;i<7;i++){
        pq.push(a[i]);
        if(pq.size()>k){
            a[idx++]=pq.top();
            pq.pop();
        }
    }
    while(!pq.empty()){
        a[idx++]=pq.top();
        pq.pop();
    }
    for(int x:a){
        cout<<x<<" ";
    }
}
