class Solution {
  public:
  
    int dp[1001][1001];
    int solve(int i, int sum, vector<int>& arr){
        if(i == arr.size()) return sum == 0;
        
        
        if(dp[i][sum] != -1) return dp[i][sum];
        
        int pick = 0;
        if(sum>=arr[i]){
            pick = solve(i+1, sum-arr[i], arr);
        }
        int skip = solve(i+1, sum, arr);
        return dp[i][sum] = pick+skip;
    }
  
    int perfectSum(vector<int>& arr, int target) {
        // code here
        memset(dp, -1, sizeof(dp));
        return solve(0, target, arr);
    }
};