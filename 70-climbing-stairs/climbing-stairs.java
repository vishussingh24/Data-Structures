class Solution {
    public int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;

        int first = 1;  // f(1)
        int second = 2; // f(2)

        for (int i = 3; i <= n; i++) {
            int third = first + second; // f(i) = f(i-1) + f(i-2)
            first = second;
            second = third;
        }

        return second; // f(n)
    }
}