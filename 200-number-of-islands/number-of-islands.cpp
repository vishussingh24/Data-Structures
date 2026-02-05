class Solution {
public:
    int row = 0, col = 0;

    void dfs(int i, int j, vector<vector<char>>& grid,vector<vector<int>>& vis){

        if (i < 0 || i >= row || j < 0 || j >= col ||
            grid[i][j] == '0' || vis[i][j] == 1){
            return;
        }

        vis[i][j] = 1;

        dfs(i - 1, j, grid, vis);
        dfs(i + 1, j, grid, vis);
        dfs(i, j - 1, grid, vis);
        dfs(i, j + 1, grid, vis);
    }

    int numIslands(vector<vector<char>>& grid){
        row = grid.size();
        col = grid[0].size();

        vector<vector<int>> vis(row, vector<int>(col, 0));
        int count = 0;

        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == '1' && vis[i][j] == 0){
                    dfs(i, j, grid, vis);
                    count++;
                }
            }
        }
        return count;
    }
};
