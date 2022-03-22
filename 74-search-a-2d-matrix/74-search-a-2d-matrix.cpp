class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        vector<int> v;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0; i<n; i++)
        {
            for(int j=0;j<m;j++)
            {
                v.push_back(matrix[i][j]);
            }
        }
        for(int i=0; i<=v.size(); i++)
        {
            int flag = 0;
            std::vector<int>::iterator it;
            it = std::find (v.begin(), v.end(), target);
            if(it!=v.end())
            {
                break;
            }
            else
            {
                return false;
            }     
        }
        return true;
    }
};