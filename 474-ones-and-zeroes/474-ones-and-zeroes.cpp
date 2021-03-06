class Solution {
public:
int findMaxForm(vector<string>& strs, int m, int n) {
  vector<vector<int>> memo(m+1, vector<int>(n+1, 0));
  int numZeroes, numOnes;

  for (auto &s : strs) {
    numZeroes = numOnes = 0;
    // count number of zeroes and ones in current string
    for (auto c : s) {
      if (c == '0')
	numZeroes++;
      else if (c == '1')
	numOnes++;
    }

    // memo[i][j] = the max number of strings that can be formed with i 0's and j 1's
    for (int i = m; i >= numZeroes; i--) {
	for (int j = n; j >= numOnes; j--) {
        
          memo[i][j] = max(memo[i][j], memo[i - numZeroes][j - numOnes] + 1);
        // cout<<memo[i - numZeroes][j - numOnes] + 1<<endl;
	}
    }
  }
  return memo[m][n];
}
};