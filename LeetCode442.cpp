class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ret;
        int tmp[nums.size() + 1] = {0};
        for (int i = 0; i < nums.size(); i++) {
            tmp[nums[i]] += 1;
        }
        for (int i = 1; i <= nums.size(); i++) {
            if (tmp[i] == 2) ret.push_back(i);
        }
        return ret;
    }
};
