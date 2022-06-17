class Solution {
public:
    vector<int> ds;
    vector<vector<int>> ans;
    void function(int i, vector<int> nums, vector<int> ds, int target){
        
        if(i==nums.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(target>=nums[i]){
            ds.push_back(nums[i]);
            function(i, nums, ds, target-nums[i]);
            ds.pop_back();
        }
        function(i+1, nums, ds, target);
    }


    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
    
        sort(nums.begin(), nums.end());
        function(0, nums, ds, target);
        return ans;
    }
};