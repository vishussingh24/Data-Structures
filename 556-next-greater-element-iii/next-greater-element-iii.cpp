class Solution {
public:
    int nextGreaterElement(int n) {
        
    
        string s = to_string(n);
        int len = s.size();
        int i=len-2;

        while(i>=0 && s[i+1] <= s[i])
        {
            i--;
        }

        if(i<0)
        {
            return -1;
        }
        int j=len-1;
        while(s[i] >= s[j])
        {
            j--;
        }

        swap(s[i], s[j]);
        reverse(s.begin()+i+1, s.end());

        long long ans = stoll(s);
        if(ans > INT_MAX)
        {
            return -1;
        }
        return ans;
    }


};