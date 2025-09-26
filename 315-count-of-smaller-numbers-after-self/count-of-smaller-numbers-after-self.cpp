class Solution {

private:

    void mergeSort(vector<pair<int, int>> &arr, int low, int high, vector<int> &ans){

        if(low==high){
            return;
        }

        int mid=low + (high-low)/2;

        mergeSort(arr, low, mid, ans);
        mergeSort(arr, mid+1, high, ans);

        merge(arr, low, mid, high, ans);

    }

    void merge(vector<pair<int, int>> &arr, int low, int mid, int high, vector<int> &ans){

        vector<pair<int, int>> temp;

        int left=low; 
        int right=mid+1;
        int rightCount=0;

        while(left<=mid && right<=high){
            if(arr[left].first <=arr[right].first){
                ans[arr[left].second] +=rightCount;
                temp.push_back(arr[left++]);
            }else{
                rightCount++;
                temp.push_back(arr[right++]);
            }
        }

        while(left<=mid){
            ans[arr[left].second] +=rightCount;
            temp.push_back(arr[left++]);
        }

        while(right<=high){
            temp.push_back(arr[right++]);
        }

        for (int k = low; k <= high; k++) {
            arr[k] = temp[k - low];
        }
    }



public:
    vector<int> countSmaller(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(n, 0);
        vector<pair<int,int>> arr;

        for(int i=0; i<n; i++){
            arr.push_back({nums[i], i});
        }

        mergeSort(arr, 0, n-1, ans);

        return ans;



        // for(int i=0; i<n-1; i++){
        //     int count=0;
        //     for(int j=i+1; j<n; j++){
        //         if(nums[i] > nums[j]){
        //             count++;
        //         }
        //     }
        //     ans.push_back(count);
        // }
        // ans.push_back(0);
        // return ans;
    }
};