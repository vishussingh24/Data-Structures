class Solution {
    bool check(const vector<string>& nums, int j) {
        for (int i = 1; i < nums.size(); i++)
            if (nums[i][j] < nums[i - 1][j])
                return true;
        return false;
    }

public:
    int minDeletionSize(vector<string>& nums) {
        int res = 0;
        for (int j = 0; j < nums[0].size(); j++)
            res += check(nums, j);
        return res;
    }
};
