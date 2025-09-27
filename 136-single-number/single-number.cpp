class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        //Bhai aise questions mai XOR use hot hai -- For Ashutosh Mishra

        int x=0;
        for(int i=0; i<nums.size(); i++){
            x ^= nums[i];
        }
        return x;
    }
};