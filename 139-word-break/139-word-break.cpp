class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        vector<bool> DP(n+1, 0);
        DP[n] = 1;
        for(int i=n-1; i>=0; --i) {
            string sub = s.substr(i,n-i);
            for(string &a:wordDict)
                if(a==sub.substr(0,a.size()) && DP[i+a.size()]) DP[i]=1;
        }
        return DP[0];
    }
};