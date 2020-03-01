class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(), nums.end());
    }
};

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (nums.size() <= 1) return ;
        int j = nums.size() - 1;
        while (j && nums[j] <= nums[j - 1]) j -= 1;
        if (j == 0) {
            sort(nums.begin(), nums.end());
            return ;
        }
        sort(nums.begin() + j, nums.end());
        for (int i = j; i < nums.size(); i++) {
            if (nums[i] > nums[j - 1]) {
                swap(nums[j - 1], nums[i]);
                return ;
            }
        }
        return ;
    }
};
