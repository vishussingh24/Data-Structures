class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int n=nums.size();

        unordered_map<int, int> mpp;

        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        int sum=0;

        for(auto& [num, count] : mpp){
            if(count % k==0){
                sum+=num*count;
            }
        }
        return sum;
    }
};