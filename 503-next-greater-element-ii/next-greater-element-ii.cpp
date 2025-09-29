class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack<int> st;
        int n=nums.size();
        vector<int> ans(n, -1);

        for(int i = 2*n - 1; i >= 0; i--) {
            int idx=i%n;
            int temp=nums[idx];

            while(!st.empty() && nums[st.top()] <= temp) {
                st.pop();
            }

            if(!st.empty()) {
                ans[idx]=nums[st.top()];
            }

            st.push(idx);
        }

        return ans;
    }
};
