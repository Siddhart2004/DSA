#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int vertex_count,
                     vector<vector<pair<int,int>>>& adjacency_list,
                     int source_vertex){
    priority_queue<pair<int,int>,
                   vector<pair<int,int>>,
                   greater<pair<int,int>>> min_priority_queue;

    vector<int> shortest_distance(vertex_count,INT_MAX);
    shortest_distance[source_vertex]=0;
    min_priority_queue.push({0,source_vertex});
    while(!min_priority_queue.empty()){
        int current_distance=min_priority_queue.top().first;
        int current_vertex=min_priority_queue.top().second;
        min_priority_queue.pop();
        if(current_distance>shortest_distance[current_vertex])
            continue;
        for(auto &adjacent_node:adjacency_list[current_vertex]){
            int next_vertex=adjacent_node.first;
            int edge_weight=adjacent_node.second;

            if(shortest_distance[current_vertex]+edge_weight
               <shortest_distance[next_vertex]){
                shortest_distance[next_vertex]=
                    shortest_distance[current_vertex]+edge_weight;
                min_priority_queue.push(
                    {shortest_distance[next_vertex],next_vertex});
            }
        }
    }
    return shortest_distance;
}

int main(){
    int vertex_count=5,source_vertex=0;
    vector<vector<pair<int,int>>> adjacency_list={
        {{1,4},{2,8}},
        {{0,4},{4,6},{2,3}},
        {{0,8},{3,2},{1,3}},
        {{2,2},{4,10}},
        {{1,6},{3,10}}
    };
    vector<int> result=
        dijkstra(vertex_count,adjacency_list,source_vertex);
    for(int distance:result)
        cout<<distance<<" ";
}
