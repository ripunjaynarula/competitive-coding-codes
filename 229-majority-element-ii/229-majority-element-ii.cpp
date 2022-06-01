class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size(), me1 = INT_MIN, me2 = INT_MIN, cnt1 = 0, cnt2 = 0;
        for(auto x : nums){
            if(x == me1) cnt1++;
            else if(x == me2) cnt2++;
            else if(cnt1 == 0) me1 = x, cnt1++;
            else if(cnt2 == 0) me2 = x, cnt2++;
            else cnt1--, cnt2--;
        }
        
        cnt1 = 0; cnt2 = 0;
        for(auto x : nums){
            if(x == me1) cnt1++;
            else if(x == me2) cnt2++;
        }
        vector<int> ans;
        if(cnt1 > n/3) ans.push_back(me1);
        if(cnt2 > n/3) ans.push_back(me2);
        return ans;
    }
};