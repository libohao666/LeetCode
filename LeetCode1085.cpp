class Solution {
public:
    int sumOfDigits(vector<int>& A) {
        int min = A[0];
        for (int i = 0; i < A.size(); i++) {
            if (A[i] < min) min = A[i];
        }
        int sum = 0;
        while (min) {
            sum += min % 10;
            min /= 10;
        }
        if (sum & 1) return 0;
        return 1;
    }
};
