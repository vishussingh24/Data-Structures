class Solution {
  public:
    int n;
    vector<string> ans;
    void solve(int idx, string s){
        
       if(idx == s.size()){
           ans.push_back(s);
           return;
       }
       
       for(int i = idx; i<s.size(); i++){
           swap(s[idx], s[i]);
           solve(idx+1, s);
           swap(s[idx], s[i]);
       }
        
    }
    vector<string> findPermutation(string &s) {
        // Code here there
        int n = s.size();
        solve(0, s);
        unordered_set<string> st;
        for(auto& x: ans){
            st.insert(x);
        }
        
        ans.clear();
        for(auto& x: st){
            ans.push_back(x);
        }
        
        return ans;
    }
};
