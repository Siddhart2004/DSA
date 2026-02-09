#include<bits/stdc++.h>
using namespace std;

bool is_safe(int r,int c,int rows,int cols,
             vector<vector<char>>& grid,
             vector<vector<bool>>& visited){
    return r>=0&&r<rows&&c>=0&&c<cols
           &&grid[r][c]=='L'&&!visited[r][c];
}

void bfs(int sr,int sc,
         vector<vector<char>>& grid,
         vector<vector<bool>>& visited){
    int rows=grid.size();
    int cols=grid[0].size();
    int dr[8]={-1,-1,-1,0,0,1,1,1};
    int dc[8]={-1,0,1,-1,1,-1,0,1};
    queue<pair<int,int>> q;
    q.push({sr,sc});
    visited[sr][sc]=true;
    while(!q.empty()){
        auto cell=q.front(); q.pop();
        int r=cell.first,c=cell.second;

        for(int d=0;d<8;d++){
            int nr=r+dr[d];
            int nc=c+dc[d];

            if(is_safe(nr,nc,rows,cols,grid,visited)){
                visited[nr][nc]=true;
                q.push({nr,nc});
            }
        }
    }
}

int count_islands(vector<vector<char>>& grid){
    int rows=grid.size();
    int cols=grid[0].size();
    vector<vector<bool>> visited(rows,vector<bool>(cols,false));
    int islands=0;
    for(int r=0;r<rows;r++){
        for(int c=0;c<cols;c++){
            if(grid[r][c]=='L'&&!visited[r][c]){
                bfs(r,c,grid,visited);
                islands++;
            }
        }
    }
    return islands;
}
int main(){
    vector<vector<char>> grid={
        {'L','L','W','W','W'},
        {'W','L','W','W','L'},
        {'L','W','W','L','L'},
        {'W','W','W','W','W'},
        {'L','W','L','L','W'}
    };

    cout<<count_islands(grid);
    return 0;
}

