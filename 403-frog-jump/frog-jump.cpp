class Solution {
public:
    bool canCross(vector<int>& stones) {
        unordered_map<int, unordered_set<int>> dp; // stone pos -> set of jump lengths
        for(int stone : stones) dp[stone] = {};   // initialize
        dp[0].insert(0); // starting point with last jump 0

        for(int stone : stones) {
            for(int k : dp[stone]) {
                for(int jump = k-1; jump <= k+1; ++jump) {
                    if(jump <= 0) continue; // can't jump 0 or negative
                    if(dp.find(stone + jump) != dp.end()) {
                        dp[stone + jump].insert(jump);
                    }
                }
            }
        }

        return !dp[stones.back()].empty();

    }
};