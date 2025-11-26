class Solution {
public:

//without backtracking optimal ans solved with help of gpt
    vector<string> ans;
    void par(int n, int open, int close, string s) {
        if (s.length()==2*n) {
            ans.push_back(s);
            return;
        }
        if (open < n) {
            s.push_back('(');
            par(n, open + 1, close, s);
            s.pop_back();
        }
        if (close < open) {
            s.push_back(')');
            par(n, open, close + 1, s);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        par(n, 0, 0, "");
        return ans;
    }
};