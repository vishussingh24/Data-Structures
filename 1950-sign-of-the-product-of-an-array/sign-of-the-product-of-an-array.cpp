class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        bool hasZeroes=false;
        int countNeg=0;
        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                hasZeroes=true;
            }
            if(nums[i]<0) countNeg++;
        }
        if(hasZeroes) return 0;

        if(countNeg%2 != 0) return -1;
        return 1;

        
    }
};