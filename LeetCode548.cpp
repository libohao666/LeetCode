class Solution {
public:
    bool splitArray(vector<int>& nums) {
        int n = nums.size();
        if (n < 7) return false;
        vector<int> d(n+1,0);
        int maxN = nums[0];
        int minN = nums[0];
        for (int i = 0; i < n; ++i) {
            d[i+1] = d[i]+nums[i];
            maxN = max(maxN, nums[i]);
            minN = min(minN, nums[i]);
        }
        for (int j = 3; j < n - 3; ++j) {
            if (abs(d[n] - d[j+1] - d[j]) <= maxN - minN) {
                for (int i = 1; i < j; ++i) {
                    int oneSum = d[i];
                    if (d[j] - d[i+1] == oneSum) {
                        for (int k = j+1; k < n-1; ++k) {
                            if (d[n]-d[k+1] == oneSum && d[k]-d[j+1] == oneSum) {
                                return true;
                            }
                        }
                    }
                }
            }
        }
        return false;
    }
};

class Solution {
public:
    bool splitArray(vector<int>& nums) {
        if (nums.size() < 7) return false;
        int n = nums.size();
        int sum[n] = {0};//前i项和
        sum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            sum[i] = sum[i -1] + nums[i];
        }
        for (int j = 3; j < n; j++) {
            set<int>s;
            for (int i = 1; i < j - 1; i++) {
                if (sum[i - 1] == sum[j - 1] - sum[i]) s.insert(sum[i - 1]);
            }
            for (int k = j + 2; k < n -1; k++) {
                set<int>::iterator it = s.find(sum[k - 1] - sum[j]);
                if (sum[n - 1] - sum[k] == sum[k - 1] - sum[j] && it != s.end()) return true;
            }
        }
        return false;
    }
};

