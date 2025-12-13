class Solution {
public:

    double power(double x, int n){
        if(n==0) return 1.0;

        if(n==1) return x;

        if(n%2 == 0){
            return power(x * x, n/2);
        }
        return  x*power(x * x, n/2);
    }


    double myPow(double x, int n) {
        //sabse phle hume return karna hai base case :- 
        long long num = n;

        
        if(n < 0){
            return (1.0/power(x, -1 * num));
        }

        return power(x, num);
    }
};