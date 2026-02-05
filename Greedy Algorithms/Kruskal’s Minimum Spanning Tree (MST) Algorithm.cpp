#include <bits/stdc++.h>
using namespace std;

class DisjointSet{
    vector<int> parent,rank;
public:
    DisjointSet(int vertexCount){
        parent.resize(vertexCount);
        rank.resize(vertexCount,1);
        for(int i=0;i<vertexCount;i++)
            parent[i]=i;
    }
    int findParent(int node){
        if(parent[node]==node)
            return node;
        return parent[node]=findParent(parent[node]);
    }
    void unionSets(int u,int v){
        int parentU=findParent(u);
        int parentV=findParent(v);

        if(parentU==parentV) return;
        if(rank[parentU]<rank[parentV])
            parent[parentU]=parentV;
        else if(rank[parentU]>rank[parentV])
            parent[parentV]=parentU;
        else{
            parent[parentV]=parentU;
            rank[parentU]++;
        }
    }
};

bool compareEdges(vector<int>& edgeA,vector<int>& edgeB){
    return edgeA[2]<edgeB[2];
}

int kruskalMST(int vertexCount,vector<vector<int>>& edgeList){
    sort(edgeList.begin(),edgeList.end(),compareEdges);
    DisjointSet dsu(vertexCount);
    int totalCost=0;
    int edgesUsed=0;
    for(auto &edge:edgeList){
        int source=edge[0];
        int destination=edge[1];
        int weight=edge[2];
        if(dsu.findParent(source)!=dsu.findParent(destination)){
            dsu.unionSets(source,destination);
            totalCost+=weight;
            edgesUsed++;
            if(edgesUsed==vertexCount-1)
                break;
        }
    }
    return totalCost;
}
int main(){
    vector<vector<int>> edgeList={
        {0,1,10},{1,3,15},{2,3,4},{2,0,6},{0,3,5}
    };
    cout<<kruskalMST(4,edgeList);
}
