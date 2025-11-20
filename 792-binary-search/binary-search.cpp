class Solution {
public:

    int bs(vector<int>& nums, int key, int low, int high){
        if(low>high){
            return -1;
        }
        int mid=(high+low)/2;
        if(nums[mid]==key){
            return mid;
        }
        else if(nums[mid]<key){
            return bs(nums, key, mid+1, high);
        }else{
            return bs(nums, key, low, mid-1);
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        return bs(nums, target, low, high);

    }
};