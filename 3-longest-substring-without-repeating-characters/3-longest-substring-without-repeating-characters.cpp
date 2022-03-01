class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int n=s.size();
     int i=0,j=0,ans=0; 
       // set<char> st ; 
       vector<int> v(256,-1); 
        while(j<n){
            if(v[s[j]]==-1) {
                //st.insert(s[j]); 
                v[s[j]]++; 
                  ans=max(ans,j-i+1); 
                j++; 
            }
            else{
                while(v[s[j]]!=-1){
                    //st.erase(s[i]);
                     v[s[i]]--; 
                    i++; 
                }
            }
        }
        return ans; 
    }
};