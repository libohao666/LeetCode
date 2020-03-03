class Solution {
public:
    int getKthMagicNumber(int k) {
        if (k <= 0) return 0;
        vector<long long int> nums(k+1, 1);
        int p3 = 0, p5 = 0, p7 = 0;
        for (int i = 1; i < k; ++i) {
            nums[i] = min(min(3 * nums[p3], 5 * nums[p5]), 7 * nums[p7]);
            if (nums[i] == 3 * nums[p3]) p3++; 
            if (nums[i] == 5 * nums[p5]) p5++; 
            if (nums[i] == 7 * nums[p7]) p7++;
        }
        return nums[k-1];
    }
};
