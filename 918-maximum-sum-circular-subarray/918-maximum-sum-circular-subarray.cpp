class Solution {
public:
    
    int calc(vector<int>& nums){
         int sum=0;
        int ans=INT_MIN;
              int n=nums.size();

        for(int i=0; i<n;i++){
            sum+=nums[i];
            ans=max(ans,sum);
            if(sum<0)
                sum=0;  
        }
        return ans;
        
    }
    int maxSubarraySumCircular(vector<int>& nums) {
      int maxWithoutLoop = calc(nums);
        
        if (maxWithoutLoop<0) {
            return maxWithoutLoop;
        }
        
        int arrSum = 0;
        for(int i = 0; i<nums.size(); i++) {
            arrSum += nums[i];
            nums[i] = 0-nums[i];
        }
        
 
        
        int minSum = calc(nums);
        
        return max(maxWithoutLoop, arrSum+minSum);
        
    }
};