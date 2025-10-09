class Solution {


public:

    int countDig(int t, int count){
        while(t>0){
            t/=10;
            count++;
        }
        return count;
    }

    int findNumbers(vector<int>& nums) {
        int countEvenDigits=0;
        

        for(int i=0; i<nums.size(); i++){
            int count=0;
            count=countDig(nums[i], count);
            if(count%2==0) countEvenDigits++;
        }
        return countEvenDigits;
    }
};