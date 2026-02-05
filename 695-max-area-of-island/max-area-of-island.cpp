class Solution {
public:
    int row, col;

    int dfs(int i, int j, vector<vector<int>>& grid) {
        if (i < 0 || i >= row || j < 0 || j >= col || grid[i][j] == 0) {
            return 0;
        }

        // mark visited
        grid[i][j] = 0;

        return 1
            + dfs(i - 1, j, grid)
            + dfs(i + 1, j, grid)
            + dfs(i, j - 1, grid)
            + dfs(i, j + 1, grid);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        row = grid.size();
        col = grid[0].size();

        int count = 0;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 1) {
                    count = max(count, dfs(i, j, grid));
                }
            }
        }
        return count;
    }
};
