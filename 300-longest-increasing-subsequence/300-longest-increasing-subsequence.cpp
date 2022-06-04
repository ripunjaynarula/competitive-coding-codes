class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int>subs(n+1, 1);
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j])
                    subs[i] = max(subs[i], 1 + subs[j]);
                // cout<<subs[i]<<endl<<subs[j];
            }
        }
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = max(ans, subs[i]);
        }
        
        return ans;
    }
};