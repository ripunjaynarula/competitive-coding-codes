class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans{-1,-1};
        int temp=1;
        int x;
        for(int i=0; i<nums.size();i++){
            
            if(nums[i]==target){
                ans[0] = i;
                for(int j=i;j<nums.size();j++){
                  if(nums[j]==target){
                      ans[1]=j;
                  }
                    else{vector<int> ans{-1,-1};}
                }
                break;   
            }
                
        }
            return ans;
    }
};