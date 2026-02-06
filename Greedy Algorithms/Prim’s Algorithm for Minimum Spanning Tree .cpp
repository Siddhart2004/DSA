#include<bits/stdc++.h>
using namespace std;

int primMST(int V,vector<vector<pair<int,int>>>& adj){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<bool> inMST(V,false);
    int totalWeight=0;
    // {weight,node}
    pq.push({0,0});
    
    while(!pq.empty()){
        auto top=pq.top();
        pq.pop();
        int weight=top.first;
        int node=top.second;
        if(inMST[node]) continue;
        inMST[node]=true;
        totalWeight+=weight;
        for(auto &edge:adj[node]){
            int nextNode=edge.first;
            int edgeWeight=edge.second;
            if(!inMST[nextNode]){
                pq.push({edgeWeight,nextNode});
            }
        }
    }
    return totalWeight;
}

int main(){
    int V=5;
    vector<vector<pair<int,int>>> adj(V);
    adj[0].push_back({1,2});
    adj[1].push_back({0,2});
    adj[0].push_back({3,6});
    adj[3].push_back({0,6});
    adj[1].push_back({2,3});
    adj[2].push_back({1,3});
    adj[1].push_back({3,8});
    adj[3].push_back({1,8});
    adj[1].push_back({4,5});
    adj[4].push_back({1,5});
    adj[2].push_back({4,7});
    adj[4].push_back({2,7});
    adj[3].push_back({4,9});
    adj[4].push_back({3,9});
    cout<<primMST(V,adj);
    return 0;
}
