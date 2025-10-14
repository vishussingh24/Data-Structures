class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        int low=0, high=arr.size()-1;
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(arr[low]<=arr[mid]){
                ans=min(ans, arr[low]);
                low=mid+1;
            }else{
                ans=min(ans, arr[mid]);
                high=mid-1;
            }
        }
        auto ptr = find(arr.begin(), arr.end(), ans);
        int idx=ptr-arr.begin();
        
        return idx;
    }
};
