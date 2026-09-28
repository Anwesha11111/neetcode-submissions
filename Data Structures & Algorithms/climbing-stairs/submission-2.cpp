class Solution {
    public:
    int helper(vector<int>&dp,int n){
        if(n<=1)return 1;
        if(dp[n])return dp[n];
        return dp[n]=helper(dp,n-1)+helper(dp,n-2);
    }
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,0);
        return helper(dp,n);
    }
};
