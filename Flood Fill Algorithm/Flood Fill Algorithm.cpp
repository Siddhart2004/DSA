#include<bits/stdc++.h>
using namespace std;

void dfs(int r,int c,
         vector<vector<int>>& img,
         int old_color,int new_color){
    if(r<0||r>=img.size()||c<0||c>=img[0].size()) return;
    if(img[r][c]!=old_color) return;
    img[r][c]=new_color;
    dfs(r+1,c,img,old_color,new_color);
    dfs(r-1,c,img,old_color,new_color);
    dfs(r,c+1,img,old_color,new_color);
    dfs(r,c-1,img,old_color,new_color);
}

vector<vector<int>> flood_fill(vector<vector<int>>& img,
                               int sr,int sc,int new_color){
    int old_color=img[sr][sc];
    if(old_color==new_color) return img;
    dfs(sr,sc,img,old_color,new_color);
    return img;
}

int main(){
    vector<vector<int>> img={
        {1,1,1,0},
        {0,1,1,1},
        {1,0,1,1}
    };

    int sr=1,sc=2,new_color=2;
    img=flood_fill(img,sr,sc,new_color);
    for(int i=0;i<img.size();i++){
        for(int j=0;j<img[0].size();j++){
            cout<<img[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
