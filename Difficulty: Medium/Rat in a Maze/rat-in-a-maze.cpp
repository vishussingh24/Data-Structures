class Solution {
  public:
  
    vector<string> ans;
    
    bool isSafe(int i, int j, int n){
        return i>=0 && i<n && j>=0 && j<n;
    }
    
    void solve(int i, int j, int n, string temp, vector<vector<int>>& maze){
        
        if(!isSafe(i, j, n) || maze[i][j]==0) return;
        
        if(i == n-1 && j == n-1) {
            ans.push_back(temp);
            return;
        };
        
        maze[i][j] = 0;
        
        //Down
        
        temp.push_back('D');
        solve(i+1, j, n, temp, maze);
        temp.pop_back();
        
        //Left
        
        temp.push_back('L');
        solve(i, j-1, n, temp, maze);
        temp.pop_back();
        
       
        //Righ
        
        temp.push_back('R');
        solve(i, j+1, n, temp, maze);
        temp.pop_back();
        
         //UP
        
        temp.push_back('U');
        solve(i-1, j, n, temp, maze);
        temp.pop_back();
        
        
        maze[i][j] = 1;
        
    }
  
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        int n = maze.size();
        if(maze[0][0] == 0) return {};

        
        solve(0, 0, n, "", maze);
        
        return ans;
        
        
        
    }
};