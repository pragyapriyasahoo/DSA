class Solution {
public:
    int numWays(vector<string>& words, string target) {
        const int MOD = 1e9 + 7;
        int n = target.size();
        int m = words[0].size();

        vector<vector<int>> cnt(m, vector<int>(26));

        for (auto &word : words)
            for (int j = 0; j < m; j++)
                cnt[j][word[j] - 'a']++;

        vector<long long> dp(n + 1);
        dp[0] = 1;

        for (int j = 0; j < m; j++) {
            for (int i = min(j + 1, n); i >= 1; i--) {
                dp[i] = (dp[i] + dp[i - 1] * cnt[j][target[i - 1] - 'a']) % MOD;
            }
        }

        return dp[n];
    }
};