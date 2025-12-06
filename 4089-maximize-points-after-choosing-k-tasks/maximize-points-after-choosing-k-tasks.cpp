class Solution {
public:
    long long maxPoints(vector<int>& technique1, vector<int>& technique2, int k) {
        long long tol=0;
        vector<long long> dif(technique1.size());
        for(int i=0; i<technique1.size(); i++){
            tol+=technique2[i];
            dif[i]= 1LL * technique1[i]-technique2[i];
        }
        sort(dif.begin(), dif.end(), greater<long long>());

        for (int i=0; i <technique1.size(); i++) {
            if (i<k || dif[i]>0) {
                tol+=dif[i];
            }else{
                break;
            }
        }
        return tol;
        
    }
};