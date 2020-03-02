class Solution {
public:
    int gcd(int x, int y) {
        return x == 0 ? y : gcd(y % x, x);
    }
    bool hasGroupsSizeX(vector<int>& deck) {
        int cnt[10001] = {0};
        for (int i = 0; i < deck.size(); i++) {
            cnt[deck[i]] += 1;
        }
        int ret = -1;
        for (int i = 0; i < 10000; i++) {
            if (cnt[i] > 0) {
                if (ret == -1) ret = cnt[i];
                else ret = gcd(ret, cnt[i]);
            }
        }
        return ret >= 2;
    }
};


