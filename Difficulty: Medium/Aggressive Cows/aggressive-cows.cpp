class Solution {
  public:
    
    bool can_we_place(vector<int> stalls, int dist, int cows){
        int count_cows=1, last=stalls[0];
        for(int i=0; i<stalls.size(); i++){
            if(stalls[i] - last >= dist){
                count_cows++;
                last=stalls[i];
            }
            if(count_cows >= cows) return true;
        }
        return false;
    }
    
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(), stalls.end());
        int n=stalls.size();
        int low=1, high=stalls[n-1] - stalls[0];
        
        while(low <= high){
            int mid = ( low + high) / 2;
            
            if(can_we_place(stalls, mid, k) == true) low = mid + 1;
            else high = mid - 1;
        }
        return high;
        
    }
};