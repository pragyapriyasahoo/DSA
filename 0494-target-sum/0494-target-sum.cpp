class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {

        unordered_map<int, int> dp;
        dp[0] = 1;

        for (int x : nums) {

            unordered_map<int, int> next;

            for (auto [sum, count] : dp) {
                next[sum + x] += count;
                next[sum - x] += count;
            }

            dp = next;
        }

        return dp[target];
    }
};