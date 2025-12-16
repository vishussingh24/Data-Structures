class Solution {
  public:
    
    bool solve(vector<int>& arr, int sum, int n, int i, vector<vector<int>>& dp){
        
        //base case:-
        if(sum == 0) return true;
        if(i == n) return false; 
        if(dp[i][sum] != -1) return dp[i][sum];
        
        bool pick = false;
        if(arr[i] <= sum){
            pick = solve(arr, sum-arr[i], n, i+1, dp);
        }
        
        bool skip = solve(arr, sum, n, i+1, dp);
        
        dp[i][sum] = pick || skip;
        return dp[i][sum];
    }
    
  
  
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        vector<vector<int>> dp(n+1, vector<int>(sum+1, -1));
        
        return solve(arr, sum, n, 0, dp);
    }
};