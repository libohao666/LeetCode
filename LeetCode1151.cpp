class Solution {
public:
    int minSwaps(vector<int>& data) {
        int n = data.size();
        int cnt[n + 1] = {0}, ans = n + 1;
        for (int i = 0; i < n; ++i) cnt[i + 1] = cnt[i] + data[i];
        for (int i = cnt[n] - 1; i < n; i++) {
            ans = min(ans, cnt[n] - cnt[i + 1] + cnt[i + 1 - cnt[n]]);
        }
        return ans;
    }
};
