class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        if(n==1) return true;
        if(n<0) return false;

        int highestPowerOfTwo= 1 << 30;

        if(highestPowerOfTwo%n == 0) return true;
        return false;


    }
};