class Solution {
public:
    
    void swap(vector<int>& nums, int x, int y)
    {
        int t = nums[x];
        nums[x] = nums[y];
        nums[y] = t;
    }
    
    void nextPermutation(vector<int>& nums) {
        
        int smallIndex = -1;
        int greaterIndex = -1;
        
        for(int i=nums.size()-1; i>0; i--)
        {
            if(nums[i] > nums[i-1]){
                smallIndex = i-1;
                break;
            }
        }
        
        if(smallIndex == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        
        for(int i=nums.size()-1; i>=0; i--)
        {
            if(nums[i] > nums[smallIndex]){
                greaterIndex = i;
                
                swap(nums, smallIndex, greaterIndex);
                break;
            }
        }
        
        for(int i=smallIndex+1, j=nums.size()-1; i<j; i++, j--){
            swap(nums, i, j);
        }
    }
    
    
};