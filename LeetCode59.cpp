class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int> > matrix(n, vector<int>(n, 0)); 
        int u = 0, d = matrix.size() - 1, l = 0, r = matrix[0].size() - 1;
        int cnt = 0;
        while(true) {
            for(int i = l; i <= r; ++i) cnt += 1, matrix[u][i] = cnt;
            if(++ u > d) break; 
            for(int i = u; i <= d; ++i) cnt += 1, matrix[i][r] = cnt;
            if(-- r < l) break; 
            for(int i = r; i >= l; --i) cnt += 1, matrix[d][i] = cnt; 
            if(-- d < u) break; 
            for(int i = d; i >= u; --i) cnt += 1, matrix[i][l] = cnt;
            if(++ l > r) break; 
        }
        return matrix;
    }
};
