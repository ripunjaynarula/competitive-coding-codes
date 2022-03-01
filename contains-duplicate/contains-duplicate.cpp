class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
//         for (int i=0;i<nums.size;i++){
//           return nums[i];  
//         }
        
        
        unordered_set<int> hashset;
    for (int key : nums) {
        if (hashset.count(key) > 0) {
            return true;
        }
        hashset.insert(key);
    }
    return false;
        
        
    }
};

