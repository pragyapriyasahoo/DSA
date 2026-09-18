class Solution {
public:
    int countSubstrings(string s) {

        int ans = 0;

        auto expand = [&](int l, int r) {
            int count = 0;

            while (l >= 0 && r < s.size() &&
                   s[l] == s[r]) {

                count++;
                l--;
                r++;
            }

            return count;
        };

        for (int i = 0; i < s.size(); i++) {
            ans += expand(i, i);
            ans += expand(i, i + 1);
        }

        return ans;
    }
};