class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        int m=s.size();
        int n=t.size();

        while(i<m){
            if(j==n){
                return false;
            }
            if(s[i] == t[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return true;

    }
};