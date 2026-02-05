class Solution {
public:
    int row, col;
    int dfs(int i, int j, vector<vector<int>>& grid) {
        if (i < 0 || i >= row || j < 0 || j >= col || grid[i][j] == 0) {
            return 1;
        }
        if (grid[i][j] == -1) return 0;
        grid[i][j] = -1;

        int up = dfs(i - 1, j, grid);
        int down = dfs(i + 1, j, grid);
        int left = dfs(i, j - 1, grid);
        int right = dfs(i, j + 1, grid);

        return up + down + left + right;
    }

    int islandPerimeter(vector<vector<int>>& grid) {
         row = grid.size();
         col = grid[0].size();
        int perimeter = 0;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 1) {
                    perimeter += dfs(i, j, grid);
                }
            }
        }
        return perimeter;
    }
};