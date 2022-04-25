class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> min_dp( nums.size(), INT_MAX );
        min_dp[0] = 0;
        for( int i = 0; i < nums.size(); i++){
            for ( int j = 1; j <= nums[i] && i+j < nums.size(); j++){
                if( min_dp[i] + 1 < min_dp[i+j] ){
                    min_dp[i+j] = min_dp[i] + 1;
                }
            }
        }
        return min_dp[nums.size()- 1];
    }
};