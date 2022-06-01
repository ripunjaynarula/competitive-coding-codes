class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=nums.size();
        int count=0;
        sort(nums.begin(),nums.end());
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if (count == 0) {
                max = nums[i];
                count = 1;
                continue;
            }
            if (max != nums[i]) {
                count--;
            } else {
                count++;
            }
        }
        return max;
    }
};