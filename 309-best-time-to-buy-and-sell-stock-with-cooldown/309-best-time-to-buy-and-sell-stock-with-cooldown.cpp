class Solution {
public:
    
    int trading(int i, int buy, vector<int> &values, vector<vector<int> > &dp, int n) {
	if(i >= n) {
		return 0;
	}
	
	if(dp[i][buy] != -1) return dp[i][buy];
	
	int profit = 0;
	if(buy) {
		            int a = (-values[i] + trading(i+1, 0, values, dp, n)); 
				 int b = trading(i+1, 1, values, dp, n);
        if(a > b)
            profit = a;
        else profit = b;
	}
	else {
		int a = (+values[i] + trading(i+2, 1, values, dp, n)); 
				int b =	trading(i+1, 0, values, dp, n);
        if(a > b) profit = a;
        else profit = b;
	}
	return dp[i][buy] = profit;	
	
}
    
    int maxProfit(vector<int>& values) {
        int n = values.size();
        vector<vector<long>> dp(n+2, vector<long>(2, 0));
        dp[n][0] = 0;
        dp[n][1] = 0;
        dp[n+1][0] = 0;
        dp[n+1][1] = 0;
        for(int i = n-1; i >=0; i-- ) {
            for(int buy = 0; buy < 2 ; buy++) {
                if(buy) {
                    dp[i][buy] = max((-values[i] + dp[i+1][0]), 
                                dp[i+1][1]);
                }
                else {
                    dp[i][buy] = max((+values[i] + dp[i+2][1]), 
                                dp[i+1][0]);
                }
            }
        }
        return dp[0][1];
         }
};