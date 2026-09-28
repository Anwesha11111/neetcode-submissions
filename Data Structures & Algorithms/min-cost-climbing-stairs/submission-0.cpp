class Solution {
    public:
    int helper(vector<int>&cost,vector<int>&dp,int i){ if(i<0)return 0;
    if(i==0||i==1) return cost[i];
        if(dp[i])return dp[i];
        return dp[i]=cost[i]+min(helper(cost,dp,i-1),helper(cost,dp,i-2));

    }
public:
    int minCostClimbingStairs(vector<int>& cost) {int n=cost.size();
        vector<int>dp(n+1,0);
        return min(helper(cost,dp,n-1),helper(cost,dp,n-2));
    }
};
