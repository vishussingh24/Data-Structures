class Solution {
public:

    //Recursion :-

    // bool subsetSum(vector<int>& nums, int i, int sum){
    //     if(sum == 0) return true;
    //     if(i == nums.size()) return false;
        
    //     bool pick = false;
    //     if(nums[i] <= sum){
    //         pick = subsetSum(nums, i+1, sum - nums[i]);
    //     }
    //     bool skip = subsetSum(nums, i+1, sum);
    //     return pick || skip;
    // }


    // bool canPartition(vector<int>& nums) {
    //     int n = nums.size();
    //     int sum = 0;
    //     for(int x: nums){
    //         sum+=x;
    //     }
    //     if(sum%2 != 0) return false;

    //     return subsetSum(nums, 0, sum/2);
    // }



    //memoization :-
    
    bool subsetSum(vector<int>& nums, int i, int sum, vector<vector<int>>& dp){
        if(sum == 0) return true;
        if(i == nums.size()) return false;
        if(dp[i][sum] != -1) return dp[i][sum];
        
        bool pick = false;
        if(nums[i] <= sum){
            pick = subsetSum(nums, i+1, sum - nums[i], dp);
        }
        bool skip = subsetSum(nums, i+1, sum, dp);
        dp[i][sum] = pick || skip;
        return dp[i][sum];
    }


    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int x: nums){
            sum+=x;
        }
        if(sum%2 != 0) return false;

        vector<vector<int>> dp(n+1, vector<int>(sum+1, -1));

        return subsetSum(nums, 0, sum/2, dp);
    }
};