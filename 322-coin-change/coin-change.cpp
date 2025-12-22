class Solution {
public:
    int dp[13][10001];

    int solve(int i, int amount, vector<int>& coins) {
        if (amount == 0) return 0;
        if (i == coins.size()) return 1e5;

        if (dp[i][amount] != -1)
            return dp[i][amount];

        int skip = solve(i + 1, amount, coins);

        int pick = 1e5;
        if (coins[i] <= amount){
            pick = 1 + solve(i, amount - coins[i], coins); 
        }

        return dp[i][amount] = min(pick, skip);
    }

    int coinChange(vector<int>& coins, int amount) {
        memset(dp, -1, sizeof(dp));
        int ans = solve(0, amount, coins);
        return ans >= 1e5 ? -1 : ans;
    }
};
