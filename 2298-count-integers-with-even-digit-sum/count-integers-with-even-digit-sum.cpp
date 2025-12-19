class Solution {
public:

    bool sumDigit(int n){
        int sum = 0;
        while(n){
            int last = n%10;
            n/=10;
            sum+=last;
        }
        if(sum%2 == 0){
            return true;
        }
        return false;
    }

    int countEven(int n) {
        int count = 0;
        for(int i=1; i<=n; i++){
            if(sumDigit(i)){
                count++;
            }
        }
        return count;
    }
};