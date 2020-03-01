class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ret;
        int n = nums.size();
        if (n < 4) return ret;
        sort(nums.begin(), nums.end());
        int max2 = nums[n - 2]+ nums[n - 1];
        int max3 = nums[n - 3] + nums[n - 2]+ nums[n - 1];
        for (int a = 0; a < n - 3; a++) {
            if (4 * nums[a] > target ) break;
            if (a > 0 && nums[a] == nums[a - 1]) continue;
            if (nums[a] +  max3< target) continue;
            for (int b = a + 1; b < n - 2; b++) {
                if (2 * nums[a] + 2 * nums[b] > target ) break;
                if (b > a + 1 && nums[b] == nums[b - 1]) continue;
                if (nums[a] + nums[b] + max2 < target) continue;
                int c = b + 1, d = n - 1;
                int t = target - nums[a] - nums[b];
                while (c < d) {
                    if (nums[c] + nums[d] < t) c += 1;
                    else if (nums[c] + nums[d] > t) d -= 1;
                    else {
                        ret.push_back({nums[a], nums[b], nums[c], nums[d]});
                        while (c < d && nums[c] == nums[++c]) ;
                        while (c < d && nums[d] == nums[--d]) ;
                        //break;
                    }
                }
            }
        }
        return ret;
    }
};
