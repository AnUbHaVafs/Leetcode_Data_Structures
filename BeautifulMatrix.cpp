#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int rowIdx;
    int colIdx;
    int dis;
    Node(int i, int j, int d){
        rowIdx=i;
        colIdx=j;
        dis=d;
    }
};
int main(){
    int row=5,col=5;
    vector<vector<int>> matrix(5,vector<int>(5,0));
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cin>>matrix[i-1][j-1];
        }
    }
    // bfs
    queue<Node>q;
    vector<vector<bool>>vis(5,vector<bool>(5,false));
    int dis=0;
    q.push(Node(2,2,dis));
    while(!q.empty()){
        int r=q.front().rowIdx;
        int c=q.front().colIdx;
        int d=q.front().dis;
        q.pop();
        if(matrix[r][c]==1){
            cout<<d<<endl;
            break;
        }
        else{
           if(r-1>=0 && !vis[r-1][c]){
            q.push(Node(r-1,c,d+1));
            vis[r-1][c]=1;
           }
           if(r+1<5 && !vis[r+1][c]){
            q.push(Node(r+1,c,d+1));
            vis[r+1][c]=1;
           }
           if(c+1<5 && !vis[r][c+1]){
            q.push(Node(r,c+1,d+1));
            vis[r][c+1]=1;
           }
           if(c-1 >=0 && !vis[r][c-1]){
            q.push(Node(r,c-1,d+1)); 
            vis[r][c-1]=1;
           }                                   
        }
    }
    return 0;
}
