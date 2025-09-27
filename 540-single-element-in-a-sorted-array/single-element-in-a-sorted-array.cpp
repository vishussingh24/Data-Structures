class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        // int left=0;
        // int right=nums.size()-1;

        // while(left != right){
        //     int mid = left+(right-left)/2;

        //     if(nums[mid] == nums[mid-1] || nums[mid] == nums[mid+1]){
        //         return nums[mid];
        //     }
        //     else if(nums[right] > nums[mid])
        // }

        int n=nums.size();
        map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }

        for(auto &num: mp){
            if(num.second == 1){
                return num.first;
            }
        }
        return 0;
    }
};