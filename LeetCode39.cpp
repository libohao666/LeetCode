class Solution {
public:
    void go(vector<int>& candidates, int now, int target, vector<int>& tmp, vector<vector<int>>& ret, int start) {
        if (now == target) {
            ret.push_back(tmp);
            return ;
        }
        for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] + now <= target) {
                vector<int>res = tmp;
                res.push_back(candidates[i]);
                go(candidates, now + candidates[i], target, res, ret, i);
            }
            else return ;
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>ret;
        vector<int>tmp;
        go(candidates, 0, target, tmp, ret, 0);
        return ret;
    }
};
