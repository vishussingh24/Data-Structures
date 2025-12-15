class Solution {
public:
    bool help(vector<int>& arr, int i, int sum) {
        if (sum==0) return true;
        if (i==arr.size()) return false;

        if (arr[i]<=sum) {
            if (help(arr, i+1, sum-arr[i]))
                return true;
        }
        return help(arr, i+1, sum);
    }

    bool isSubsetSum(vector<int>& arr, int sum) {
        return help(arr, 0, sum);
    }
};
