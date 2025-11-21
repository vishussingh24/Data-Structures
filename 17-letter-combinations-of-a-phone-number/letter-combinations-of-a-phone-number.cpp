class Solution {
public:

    void helper(vector<string>& keypad, const string& digits, int i, vector<string>& ans, string &str){
        

        if(i>=digits.size()){
            ans.push_back(str);
            return;
        }
        int digit = digits[i] - '0';
        const string &letters = keypad[digit];
        for(char c:letters){
            str.push_back(c);                
            helper(keypad, digits, i + 1, ans, str);
            str.pop_back();
        }

        

    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> keypad={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        string str="";

        helper(keypad, digits, 0, ans, str);
        return ans;
    }
};