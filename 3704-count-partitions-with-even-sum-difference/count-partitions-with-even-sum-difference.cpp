class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        int prefixSum=0;
        int  suffixSum=0;
        int ans=0;

        for(int x: nums) suffixSum+=x;
        for(int i=0; i<n-1; i++){
            prefixSum+=nums[i];
            suffixSum-=nums[i];
            if((abs(prefixSum-suffixSum))%2==0) ans++;
            
        }
        return ans;



    }
};