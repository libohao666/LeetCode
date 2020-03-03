class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int m[26] = {0};
        for (int i = 0; i < tasks.size(); i++) {
            m[tasks[i] - 'A'] += 1;
        }
        sort(m, m + 26);
        int max = m[25] - 1, p = max * n;
        for (int i = 24; i >= 0 && m[i] > 0; i--) {
            p -= min(m[i], max);
        }
        return p > 0 ? p + tasks.size() : tasks.size();
    }
};

