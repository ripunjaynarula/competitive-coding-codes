class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size();
        int buy = p[0];
        int profit=0;
        
        for(int i=1;i<n;i++){
            if(buy>p[i]){
                buy = p[i];
            }
            if(p[i]>buy){
                profit += p[i]-buy;
                buy = p[i];
            }
        }
        return profit;
    }
};