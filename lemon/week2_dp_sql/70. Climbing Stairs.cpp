class Solution {
public:
    int dp[46];

    int solve(int n){
        if(n == 1) return 1;
        if(n == 2) return 2;
        if(dp[n]!= -1) return dp[n];
        return dp[n] = solve(n-1)+solve(n-2);
    }

    int climbStairs(int n) {

        memset(dp, -1, sizeof(dp));
        return solve(n);
        
    }
};
// On with dp if not dp then 2**n
// fibbo series