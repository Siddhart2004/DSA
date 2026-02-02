#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>& a,pair<int,int>& b){
    return (double)a.first/a.second>(double)b.first/b.second;
}
double fractionalKnapsack(vector<int>& val,vector<int>& wt,int cap){
    int n=val.size();
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++) v.push_back({val[i],wt[i]});
    sort(v.begin(),v.end(),cmp);
    double ans=0.0;
    for(int i=0;i<n;i++){
        if(v[i].second<=cap){
            ans+=v[i].first;
            cap-=v[i].second;
        }else{
            ans+=((double)v[i].first/v[i].second)*cap;
            break;
        }
    }
    return ans;
}
int main(){
    vector<int> val={60,100,120};
    vector<int> wt={10,20,30};
    int cap=50;
    cout<<fractionalKnapsack(val,wt,cap);
    return 0;
}
