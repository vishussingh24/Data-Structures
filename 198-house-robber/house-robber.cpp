class Solution {
public:

    // USING MEMOIZATION -

    int memo (int idx, vector<int>& nums, int n, vector<int>& dp){
        if(idx==0) return nums[idx];
        if(idx<0) return 0;

        if(dp[idx] != -1) return dp[idx];

        int pick = nums[idx]+memo(idx-2, nums, n, dp);
        int skip = 0+memo(idx-1, nums, n, dp);
        return dp[idx] = max(pick, skip);
    }


    // USING TABULATION :-


    int tabulation(vector<int>& nums, int n, vector<int>& dp){

        dp[0] = nums[0];
        for(int i=1; i<n; i++){
            int pick = nums[i];
            if(i>1){
                pick+=dp[i-2];
            }
            int skip = 0+dp[i-1];
            dp[i] = max(pick, skip);
        }
        return dp[n-1];
    }

    //USING SPACE-OPTIMIZATION :-

    int space(vector<int>& nums){
        int n = nums.size();
        int prev1 = nums[0];
        int prev2 = 0;

        for(int i=1; i<n; i++){
            
            int take = nums[i];
            if(i>1){
                take+=prev2;
            }
            int skip = 0 + prev1;
            int curr = max(take, skip);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return space(nums);
    }






};