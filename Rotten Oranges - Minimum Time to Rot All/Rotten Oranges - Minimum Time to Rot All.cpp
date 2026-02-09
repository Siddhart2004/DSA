#include<bits/stdc++.h>
using namespace std;

bool is_safe(int row,int col,int rows,int cols){
    return row>=0&&row<rows&&col>=0&&col<cols;
}

int oranges_rot(vector<vector<int>>& grid){
    int rows=grid.size();
    int cols=grid[0].size();
    queue<pair<int,int>> rotten_queue;
    int minutes=0;
    for(int r=0;r<rows;r++){
        for(int c=0;c<cols;c++){
            if(grid[r][c]==2){
                rotten_queue.push({r,c});
            }
        }
    }
    int dr[4]={1,0,-1,0};
    int dc[4]={0,1,0,-1};
    while(!rotten_queue.empty()){
        int level_size=rotten_queue.size();
        bool rotted=false;
        for(int i=0;i<level_size;i++){
            auto cell=rotten_queue.front(); rotten_queue.pop();
            int r=cell.first,c=cell.second;
            for(int d=0;d<4;d++){
                int nr=r+dr[d];
                int nc=c+dc[d];
                if(is_safe(nr,nc,rows,cols)&&grid[nr][nc]==1){
                    grid[nr][nc]=2;
                    rotten_queue.push({nr,nc});
                    rotted=true;
                }
            }
        }
        if(rotted) minutes++;
    }
    for(int r=0;r<rows;r++){
        for(int c=0;c<cols;c++){
            if(grid[r][c]==1) return -1;
        }
    }
    return minutes;
}
int main(){
    vector<vector<int>> grid={
        {2,1,0,2,1},
        {1,0,1,2,1},
        {1,0,0,2,1}
    };
    cout<<oranges_rot(grid);
    return 0;
}
