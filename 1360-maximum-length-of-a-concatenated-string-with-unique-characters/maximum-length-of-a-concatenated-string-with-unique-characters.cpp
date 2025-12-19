class Solution {
public:

    unordered_map<string, int> mp;

    bool containDuplicate(string s, string temp){
        vector<int> freq(26, 0);

        for(char x: s){
            if(freq[x - 'a']++) return true;
        }
        for(char x: temp){
            if(freq[x - 'a']++) return true;
        }
        return false;
        
    }

    int solve(vector<string>& arr, int n, int i, string s){
        if(i == n) {
            return s.size();
        }
        if(mp.find(s) != mp.end()) return mp[s];
        int take = 0;
        if(!containDuplicate(s, arr[i])){
            take = solve(arr, n, i+1, s+arr[i]);
        }
        
        int skip = solve(arr, n, i+1, s);
        return max(take, skip);
    }

    int maxLength(vector<string>& arr) {
        int n = arr.size();
        mp.clear();
        return solve(arr, n, 0, "");
    }
};