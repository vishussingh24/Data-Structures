class Solution {
public:

    int  number(int n){
        if(n==0 || n==1){
            return n;
        }

        return number(n-1)+number(n-2);
    }
    int fib(int n) {
        int ans = number(n);
        return ans;
    }
};