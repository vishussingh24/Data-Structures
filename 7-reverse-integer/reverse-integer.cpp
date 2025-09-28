class Solution {
public:
    int reverse(int x) {
        long long rev=0;
        
        long long d=x;
        if(d<0){
            d= -d;
        }
        while(d>0){

           
            int last = d%10;
            d/=10;

            rev = (rev*10) + last;
            if (rev > INT_MAX) return 0;
        }

        if(x<0){
                return 0-rev;
        }
        if (rev < INT_MIN || rev > INT_MAX) return 0;

        return (int)rev;
    }
};