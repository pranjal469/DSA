class Solution {
public:
    int climbStairs(int n) {
        if (n <= 3) return n;

        int a = 2, b = 3; // a = f(n-2), b = f(n-1)
        int c;

        for (int i = 4; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }

        return b;
    }
};
