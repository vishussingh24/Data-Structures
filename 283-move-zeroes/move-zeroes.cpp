class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int j=-1;
        int n=nums.size();
        int countZero=0;

        if(n==1){
            return;
        }

        //yaha pe j pointer ke value pata krr 

        for(int i=0; i<n; i++){
            if(nums[i]==0){
                countZero++;
                j=i;
                break;
            }
        }

        if(countZero == 0){
            return;
        }

        //yadi i ki value 0 nhi hai toh swap kardo

        for(int i=j+1; i<n; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};