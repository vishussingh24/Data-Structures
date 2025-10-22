class Solution {
public:

    int find_max_element(vector<int>& arr){
        int maxi=INT_MIN;
        int n=arr.size();
        for(int i=0; i<n; i++){
            maxi=max(maxi, arr[i]);
        }
        return maxi;
    }

    long long find_min_hours(vector<int>& arr, int mid){
        long long hour=0;
        long long n=arr.size();
        for(int i=0; i<n; i++){
            hour+=ceil((double)arr[i]/(double)mid);
        }
        return hour;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long low=1, high=find_max_element(piles);
        while(low<=high){
            long mid=low+(high-low)/2;
            long total_hours=find_min_hours(piles, mid);
            if(total_hours<=h){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return (int)low;
    }
};