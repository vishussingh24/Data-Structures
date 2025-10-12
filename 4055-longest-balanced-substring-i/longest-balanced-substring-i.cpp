class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size();

        int len=0;

        for(int i=0; i<n; i++){
            unordered_map<char, int> mpp;

            for(int j=i; j<n; j++){
                mpp[s[j]]++;

                int total=0;
                bool balance=true;

                for(auto& p:mpp){
                    if(total==0){
                        total=p.second;
                    }else if(p.second != total){
                        balance=false;
                        break;
                    }
                }
                if(balance==true){
                    len=max(len, j-i+1);
                }
            }
        }
        return len;
    }
};