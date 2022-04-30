class Solution {
public:
int maxProfit(vector<int> prices) {
int n=prices.size();

    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i==0 || i==1){
                v[j]=max(v[j],prices[j]-prices[i]);
                v[j]=max(v[j],v[j-1]);
            }
            else{
                v[j]=max(v[j],prices[j]-prices[i]+v[i-2]);
                v[j]=max(v[j],v[j-1]);
            }
        }
    }
    
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,v[i]);
    }
    return ans;
}
};