class Solution {
public:

    // USING RECURSION :- 

    int solve(int idx, vector<int>& nums, vector<int>& dp){
        if(idx == 0) return nums[0];
        if(idx<0) return 0;

        if(dp[idx] != -1) return dp[idx];

        int take = nums[idx] + solve(idx-2, nums, dp);
        int skip = 0 + solve(idx-1, nums, dp);

        return dp[idx]=max(take, skip);   
    }  

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp1, temp2;

        if(nums.size() == 1) return nums[0];
        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);

        for(int i=0; i<n; i++){
            if(i!=0) temp2.push_back(nums[i]);
            if(i!=n-1) temp1.push_back(nums[i]);
        }
        return max(solve(n-2, temp1, dp1), solve(n-2, temp2, dp2));
    }
};