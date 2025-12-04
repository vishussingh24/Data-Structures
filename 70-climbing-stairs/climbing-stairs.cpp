class Solution {
public:

/*
    //using recursion:-
    int climbStairs(int n){
        if(n==1 || n==0) return 1;
        return climbStairs(n-1)+climbStairs(n-2);
    }
*/

/*
    //memorization top - down approch
    int solve(vector<int>& dp, int n){
        if(n==0 || n==1) return 1;
        
        dp[n]=solve(dp, n-1)+solve(dp, n-2);
        return dp[n];
    }

    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        dp[0]=1;
        dp[1]=1;
        solve(dp, n);
        return dp[n];
    }
*/

/*
    //memorization using bottom-up approch:-

    int solve(vector<int>& dp, int n){
        if(n==1 || n==0) return 1;

        for(int i=2; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];

    }

    int climbStairs(int n){
        vector<int> dp(n+1, -1);
        dp[0]=1;
        dp[1]=1;
        solve(dp, n);
        return dp[n];
    }

*/


    //space - optimization technique:-


    int climbStairs(int n){
        if(n<0) return 0;
        if(n==0 || n==1) return 1;
        int curr=0;

        int a=1, b=1;

        for(int i=2; i<=n; i++){
            curr=a+b;
            a=b;
            b=curr;
        }
        return curr;

    }



};