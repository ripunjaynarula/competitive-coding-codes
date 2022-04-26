class Solution {
public:
    bool canJump(vector<int>& nums) {
        int j=0,maxnum=0;
        if(nums.size()==1)
            return true;
        for(int i=0;i<nums.size()-1;i++){
            j=i+nums[i]; 
            maxnum = max(j,maxnum);  
            if(maxnum>=nums.size()-1) 
                return true;
            if(nums[i]==0 && maxnum==i){ 
                break;                   
            }
        }
        return false;
    }
};