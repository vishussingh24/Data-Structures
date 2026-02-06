class Solution {
    
    
    
  public:
  
  
    void dfs(int i, int j,  vector<vector<int>>& vis,  vector<vector<int>>& image, int color, int newColor){
    
        int m = image.size();
        int n = image[0].size();
        
        if(i<0 || i>=m || j<0 || j>=n || vis[i][j] == newColor || image[i][j] != color){
            return;
        }
        
        vis[i][j] = newColor;
        
        dfs(i-1, j, vis, image, color, newColor);
        dfs(i+1, j, vis, image, color, newColor);
        dfs(i, j-1, vis, image, color, newColor);
        dfs(i, j+1, vis, image, color, newColor);
    }
  
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        // code here
        int m = image.size();
        int n = image[0].size();
        
        vector<vector<int>> vis(m, vector<int>(n, -1));
        
        int color = image[sr][sc];
        
        dfs(sr, sc, vis, image, color, newColor);
        
        // for(int i=0; i<m; i++){
        //     for(int j=0; j<n; j++){
        //         if(i == sr && j == sc){
        //             dfs(i, j, vis, image, color, newColor);
        //         }
        //     }
        // }
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(vis[i][j] == newColor){
                    image[i][j] = newColor;
                }
            }
        }
        return image;
    }
};