class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                int ans=i*i + j*j;
                for(int k=1; k<=n; k++){
                    if(ans-k*k == 0){
                        count++;
                    }
                }
            }
        }
        return count;
        
    }
};