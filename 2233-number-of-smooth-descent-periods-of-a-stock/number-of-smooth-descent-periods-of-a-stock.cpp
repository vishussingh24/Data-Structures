class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n = prices.size();
        int len = 1;
        long long ans = 0;

        for(int i=1; i<n; i++){
            if(prices[i]+1 == prices[i-1]){
                len++;
            }else{
                ans += (1LL*len*(len+1))/2;
                len=1;
            }
        }
        ans += (1LL*len*(len+1))/2;
        return ans;
    }
};