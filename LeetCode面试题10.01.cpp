class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        vector<int>ret;
        int a = 0, b = 0;
        while (a < m && b < n ) {
            if (A[a] < B[b]) {
                ret.push_back(A[a]);
                a += 1;
            }
            else {
                ret.push_back(B[b]);
                b += 1;
            }
        }
        while (a < m) {
            ret.push_back(A[a]);
            a += 1;
        }
        while (b < n) {
            ret.push_back(B[b]);
            b += 1;
        }
        A = ret;
    }
};
