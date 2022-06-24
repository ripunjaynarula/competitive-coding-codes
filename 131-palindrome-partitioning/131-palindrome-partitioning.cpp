class Solution {
public:
    void palPart (vector<vector<string>> &ans,vector<string> &temp,string s,int j){
        if(s.size()==0)
            return;
        if(j>s.size()-1){
        ans.push_back(temp);
        return;
        }
        int m,n,l;
        
        for(m=s.size()-1;m>=j;m--){
            l=j;
            n=m;
            
            while(l<n&&s[l]==s[n]){
                
                l++;
                n--;
                
            }
            if(l>=n){
                
                temp.push_back(s.substr(j,m-j+1));
                
                palPart(ans,temp,s,m+1);
                
                temp.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
    vector<vector<string> >  ans;
    vector<string> temp;
    palPart (ans,temp,s,0);
    return ans;
    }
};