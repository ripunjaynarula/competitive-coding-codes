class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        set<int> x, y;
    int n=mat.size(), m=mat[0].size();
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j]==0){
                x.insert(i);
                y.insert(j);
            }
        }
    }
    for(int i:x){
        for(int j=0; j<m; j++){
            mat[i][j] = 0;
        }
    }
    for(int j:y){
        for(int i=0; i<n; i++){
            mat[i][j] = 0;
        }
    }
    }
};