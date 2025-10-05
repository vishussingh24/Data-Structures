#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int m,n;
    vector<vector<int>> dirs={{1,0},{-1,0},{0,1},{0,-1}};
    void dfs(int r,int c,vector<vector<int>>&h,vector<vector<bool>>&ocean){
        ocean[r][c]=true;
        for(auto &d:dirs){
            int nr=r+d[0];
            int nc=c+d[1];
            if(nr<0||nc<0||nr>=m||nc>=n){
                continue;
            }
            if(ocean[nr][nc]){
                continue;
            }
            if(h[nr][nc]<h[r][c]){
                continue;
            }
            dfs(nr,nc,h,ocean);
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>&heights){
        m=heights.size();
        n=heights[0].size();
        vector<vector<bool>> pac(m,vector<bool>(n,false));
        vector<vector<bool>> atl(m,vector<bool>(n,false));
        for(int c=0;c<n;c++){
            dfs(0,c,heights,pac);
        }
        for(int r=0;r<m;r++){
            dfs(r,0,heights,pac);
        }
        for(int c=0;c<n;c++){
            dfs(m-1,c,heights,atl);
        }
        for(int r=0;r<m;r++){
            dfs(r,n-1,heights,atl);
        }
        vector<vector<int>> res;
        for(int r=0;r<m;r++){
            for(int c=0;c<n;c++){
                if(pac[r][c]&&atl[r][c]){
                    res.push_back({r,c});
                }
            }
        }
        return res;
    }
};
