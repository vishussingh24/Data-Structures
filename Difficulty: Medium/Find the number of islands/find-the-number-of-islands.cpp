class Solution {
    
  private:
    void bfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& grid){
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<int, int>> q;
        q.push({row, col});
        vis[row][col] = 1;
        
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            
            for(int dr = -1; dr <= 1; dr++){
                for(int dc = -1; dc <= 1; dc++){
                    if(dr == 0 && dc == 0) continue;
                    
                    int nr = r + dr;
                    int nc = c + dc;
                    
                    if(nr >= 0 && nc >= 0 && nr < n && nc < m &&
                       grid[nr][nc] == 'L' && !vis[nr][nc]){
                        vis[nr][nc] = 1;
                        q.push({nr, nc});
                    }
                }
            }
        }
    }
    
  public:
    int countIslands(vector<vector<char>>& grid) {
        if(grid.empty()) return 0;
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int islands = 0;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 'L' && !vis[i][j]){
                    bfs(i, j, vis, grid);
                    islands++;
                }
            }
        }
        return islands;
    }
};
