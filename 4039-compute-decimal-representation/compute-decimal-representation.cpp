class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        int count = 0;
        string s = to_string(n);
        vector<int> ans;
        int t = s.size();
        for(int i=0; i<t; i++){
            int last = n%10;
            n = n/10;
            int power = pow(10, i);
            int num = last*(power);
            if(num != 0){
                ans.push_back(num);
            }
            
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};