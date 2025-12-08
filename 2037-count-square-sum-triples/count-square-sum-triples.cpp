class Solution {
public:


    
    int countTriples(int n) {
        int count=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                int ans=i*i + j*j;
                if(sqrt(ans)<=n){
                    if((int)sqrt(ans)==sqrt(ans)){
                        count++;
                    }
                    
                }
            }
        }
        return count;
        
    }
};