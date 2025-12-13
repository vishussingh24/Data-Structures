class Solution {
public:

    
    
    bool isValidCode(string s){
        bool validCode = true;
        if(s == "") return false;
        for(char ch: s){
            if(!(isalpha(ch) || isdigit(ch) || ch == '_') ){
                return false;
                break;
            }
        }
        return validCode;
    }

    bool isValidLine(string s){
        bool validLine = true;
        if(!(s == "electronics" || s == "grocery" || s == "pharmacy" || s == "restaurant")){
            validLine = false;

        }
        return validLine;

    }

    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<string> ans;
        int n1 = code.size();
        int n2 = businessLine.size();
        int n3 = isActive.size();

        if(n1 != n2 || n2 != n3 || n3 != n1) return ans;

        vector<pair<string, string>> cp;

        for(int i = 0; i<n1; i++){
            if(isValidCode(code[i]) && isActive[i]==true && isValidLine(businessLine[i])){
                cp.push_back({businessLine[i], code[i]});
            }
        }

        sort(cp.begin(), cp.end());

        for(auto& p: cp){
            ans.push_back(p.second);
        }
        return ans;
    }
};