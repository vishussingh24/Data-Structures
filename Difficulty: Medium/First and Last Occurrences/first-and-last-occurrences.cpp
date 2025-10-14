class Solution {
  public:
  
    int second_occurence(vector<int>& arr, int x){
        int low=0;
        int high=arr.size()-1;
        int second=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==x){
                second=mid;
                low=mid+1;
            }else if(arr[mid]<x){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return second;
        
    }
    
    int first_occurence(vector<int>& arr, int x){
        int low=0;
        int high=arr.size()-1;
        int first=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==x){
                first=mid;
                high=mid-1;
            }else if(arr[mid]<x){
                low=mid+1;
            }else{
                high=mid-1;
            }
            
        }
        return first;
    }
        
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int first = first_occurence(arr, x);
        int second = second_occurence(arr, x);
        return {first, second};
        
    }
};