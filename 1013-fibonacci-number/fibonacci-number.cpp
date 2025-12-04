class Solution {
public:
    // int fib(int n) {
    //     if(n==0 || n==1) return n;
    //     return fib(n-1)+fib(n-2);

    // }

    // using Dynamic programming



    // using  top down approch 
    int fib(int n) {
        // creating an dp array of n+1 size
        // initialising some values to it like -1;
        vector<int> dp(n + 1, -1);
        if(n==0 || n==1) return n;
        dp[0]=0, dp[1]=1; 
        solve(dp, n);
        return dp[n];
    }
/*

    int solve(vector<int>& dp, int n) {

        if (n <= 1) {
            return n;
        }
        if (dp[n] != -1) {
            return dp[n];
        }
        dp[n] = solve(dp, n - 1) + solve(dp, n - 2);
        return dp[n];
    }

*/


    //using bottom up approch:-

    int solve(vector<int>& dp, int n){
        if(n<=1) return n;
        
        for(int i=2; i<=n; i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];

    }


};