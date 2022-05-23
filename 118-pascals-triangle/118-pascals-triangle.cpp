class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<int> col;
        vector<vector<int>> out;
        int i,j;
        out.push_back({1});
        for(i=1;i<numRows;i++)
        {
            vector<int> col;
            col.push_back(1);
            for(j=1;j<i;j++)
            {
               col.push_back(out[i-1][j-1]+out[i-1][j]) ;
            }
            col.push_back(1);
            out.push_back(col);
        }
        return out;
        
    }
};