class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0) return {-1, -1};
        vector<int>ret = {0, 0};
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int mid = (l + r) >> 1;
            if (nums[mid] == target) {
                l = mid; 
                break;
            }
            if (nums[mid] > target) r = mid - 1;
            else l = mid + 1;
        }
        if (nums[l] != target) {
            ret[0] = ret[1] = -1;
            return ret;
        }
        int i = l, j = l;
        while (i - 1 >= 0 && nums[i - 1] == nums[l]) i--;
        while (j + 1 < nums.size() && nums[j + 1] == nums[l]) j++;
        ret[0] = i;
        ret[1] = j;
        return ret;
        }
};
