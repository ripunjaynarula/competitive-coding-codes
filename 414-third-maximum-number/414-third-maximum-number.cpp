class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long int max1=LONG_MIN;
        long long int max2=LONG_MIN;
        long long int max3=LONG_MIN;
        bool fk=false;
        int sz=nums.size();
        for(int i=0;i<sz;i++)
        {
            if(nums[i]==INT_MIN)
            {
                fk=true;
            }
            if(nums[i]>max1)
            {
                max3=max2;
                max2=max1;
                max1=nums[i];
            }
            else if(nums[i]>max2 && nums[i]!=max1)
            {
                max3=max2;
                max2=nums[i];
            }
            else if(nums[i]>max3 && nums[i]!=max1 && nums[i]!=max2)
            {
                max3=nums[i];
            }
        }
       
        return max3==LONG_MIN ? max1 : max3;
    }
};