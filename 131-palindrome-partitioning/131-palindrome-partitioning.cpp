class Solution {
public:
    // vector<vector<string>> ans;
    bool isPalindrome(string s, int start, int end) {
        while(start<=end) {
            if(s[start++]!=s[end--]) return false;
        }
        return true;
    }
    void check(string s, int ind, int n, vector<string> temp, vector<vector<string>> &ans) {
        if(ind==n) {
            ans.push_back(temp);
            return;
        }
        
        for(int i = ind; i<n; i++) {
            if(isPalindrome(s, ind, i)) {
                temp.push_back(s.substr(ind, i-ind+1));
                check(s, i+1, n, temp, ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        int n = s.size();
        vector<string> t;
        check(s, 0, n, t, ans);
        return ans;
    }
};