class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int res[101] = {0}, cnt[101] = {0};
        vector<int>ret;
        for (int i = 0;  i < nums.size(); i++) {
            cnt[nums[i]] += 1;
        }
        for (int i = 1; i <= 100; i++) {
            res[i] += res[i - 1] + cnt[i - 1];
        }
        for (int i = 0;  i < nums.size(); i++) {
            ret.push_back(res[nums[i]]);
        }
        return ret;
    }
};
