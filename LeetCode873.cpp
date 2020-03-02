class Solution {
public:
    int lenLongestFibSubseq(vector<int>& A) {
        int n = A.size(), ans = 0;
        unordered_set<int> S(A.begin(), A.end());
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int len = 2, a = A[j], b = A[i] + A[j];
                while (S.find(b)  != S.end()) {
                    int tmp = a + b;
                    a = b;
                    b = tmp;
                    ans = max(ans, ++len);
                }
            }
        }
        return ans > 2 ? ans : 0;
    }
};
