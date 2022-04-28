class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) 
    {
        int score,maxscore=0,j=values[0];
        for(int i=1;i<values.size();i++)
        {
            score=j+values[i]-i;
            maxscore=max(maxscore,score);
            j=max(j,values[i]+i);
        }
        return maxscore;
    }
};