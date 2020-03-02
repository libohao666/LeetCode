class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, len = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]) len += 1 ,ans = max(ans, len);
            else len = 0;
        }
        return ans;
    }
};
