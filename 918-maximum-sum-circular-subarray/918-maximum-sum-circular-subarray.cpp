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
      int n=nums.size();
        int arrsum=0;
       int maxn=calc(nums);
        if(maxn<0){
            return maxn;
        }
        for(int i=0;i<n;i++){
             arrsum =arrsum+nums[i];
            nums[i]=0-nums[i];
        }
        
        int x=calc(nums);
        return max(maxn, (arrsum+x));
        
    }
};