class Solution {
public:
    int longestLine(vector<vector<int>>& M) {
        if (M.size() == 0 || M[0].size() == 0) return 0;
        int m = M.size(), n = M[0].size();
        int ans = 0;
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(4, 0)));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (M[i][j] == 1) {
                    dp[i][j][0] = j > 0 ? dp[i][j - 1][0] + 1 : 1;
                    dp[i][j][1] = i > 0 ? dp[i - 1][j][1] + 1 : 1;
                    dp[i][j][2] = i > 0 && j > 0 ? dp[i - 1][j - 1][2] + 1 : 1;
                    dp[i][j][3] = i > 0 && j < n - 1 ? dp[i - 1][j + 1][3] + 1 : 1;

                    int max1 = max(dp[i][j][0], dp[i][j][1]);
                    int max2 = max(dp[i][j][2], dp[i][j][3]);
                    ans = max(ans , max(max1, max2));
                }
            }
        }
        return ans;
    }
};

