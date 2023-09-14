class Solution10 {
public:
    int fib(int n) {
        //下面的代码能通过但是是超时
        // if (n < 2) {
        //     return n;
        // }
        // return fib(n-1) + fib(n-2);

        if (n <= 1) return n;
        int dp[2];
        dp[0] = 0;
        dp[1] = 1;
        int mod = 1000000007;
        for (int i = 2; i <= n; i++) {
            int sum = dp[0] + dp[1];
            dp[0] = dp[1];
            dp[1] = sum%mod;
        }
        return dp[1];
    }
};