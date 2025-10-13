class Solution {
public:

    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t)
            return true;
        return false;
        
    }

    vector<string> removeAnagrams(vector<string>& words) {

        int n=words.size();
        vector<string> ans;
        ans.push_back(words[0]);
        for(int i=1; i<n; i++){
            if(!isAnagram(words[i-1], words[i])){
                ans.push_back(words[i]);
            }
        }
        return ans;

        
    }
};