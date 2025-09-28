class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> ans;

        for(int i=0; i<n1; i++){
            int idx = -1;
            bool found = false;
            for(int j=0; j<n2; j++){
                if(nums1[i] == nums2[j]){
                    idx = j;
                }
                if( idx != -1 && j > idx ){
                    if(nums1[i] < nums2[j]){
                        ans.push_back(nums2[j]);
                        found = true;
                        break;
                    }   
                }
            }
            if(!found) ans.push_back(-1);
        }
        return ans;
    }
};