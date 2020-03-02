class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) {
        map<int, priority_queue<int, vector<int>, greater<int>>> tmp;
        for(int i = 0; i < items.size(); i++) {
            tmp[items[i][0]].push(items[i][1]);
            if (tmp[items[i][0]].size() > 5) {
                tmp[items[i][0]].pop();
            }
        }
        vector<vector<int>> ret;
        map<int, priority_queue<int, vector<int>, greater<int>>>::iterator iter;
        iter = tmp.begin();
        while(iter != tmp.end()) {
            int sum = 0;
            while (!iter->second.empty()) {
                sum += iter->second.top();
                iter->second.pop();
            }
            ret.push_back({iter->first, sum / 5});
            iter++;
        }
        return ret;
    }
};

