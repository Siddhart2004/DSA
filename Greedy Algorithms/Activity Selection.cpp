#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>& a,pair<int,int>& b){
    return a.second<b.second;
}
int activitySelection(vector<int>& start,vector<int>& finish){
    int n=start.size();
    vector<pair<int,int>> activities;
    for(int i=0;i<n;i++)
        activities.push_back({start[i],finish[i]});
    sort(activities.begin(),activities.end(),cmp);
    int count=1;
    int lastFinish=activities[0].second;
    for(int i=1;i<n;i++){
        if(activities[i].first>=lastFinish){
            count++;
            lastFinish=activities[i].second;
        }
    }
    return count;
}
