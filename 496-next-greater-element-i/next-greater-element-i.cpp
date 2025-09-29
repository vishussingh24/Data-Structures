class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        // int n1 = nums1.size();
        // int n2 = nums2.size();
        // vector<int> ans;

        // for(int i=0; i<n1; i++){
        //     int idx = -1;
        //     bool found = false;
        //     for(int j=0; j<n2; j++){
        //         if(nums1[i] == nums2[j]){
        //             idx = j;
        //         }
        //         if( idx != -1 && j > idx ){
        //             if(nums1[i] < nums2[j]){
        //                 ans.push_back(nums2[j]);
        //                 found = true;
        //                 break;
        //             }   
        //         }
        //     }
        //     if(found == false){
        //         ans.push_back(-1);
        //     }
        // }
        // return ans;


        stack<int> st;
        unordered_map<int, int> mp;
        vector<int> ans;

        for(int i=nums2.size()-1; i>=0; i--){
            

            while(!st.empty() && nums2[st.top()] <= nums2[i]){
                st.pop();
            }

            if(st.empty()){
                mp[nums2[i]] = -1;
            }else{
                mp[nums2[i]] = nums2[st.top()];
            }
            st.push(i);
            
        }

        for(int num : nums1){
            ans.push_back(mp[num]);
        }
        return ans;
    }
};