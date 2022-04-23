class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int dp1 = 0, dp2 = 0;
        int n=cost.size();
    for (int i = 0; i < n; i++) {
        int dp0 = cost[i] + min(dp1, dp2);
         dp2 = dp1;
        dp1 = dp0;
    }
    return  min(dp2,dp1);
    }
};