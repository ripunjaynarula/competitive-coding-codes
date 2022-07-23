class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
         int n=nums.size();
        vector<int> m(n,0);
        int i=0;
        while(i<n && n>1){
            for(int j=0;j<n;j++){
                if(nums[i]>nums[j])
                    m[i]++;
                
            }
            i++;
        }
        return m;
    }
};