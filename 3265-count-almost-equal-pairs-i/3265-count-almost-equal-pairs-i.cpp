class Solution {
public:
    bool check(int a, int b) {
        string x = to_string(a);
        string y = to_string(b);

        while (x.size() < y.size())
            x = "0" + x;

        while (y.size() < x.size())
            y = "0" + y;

        vector<int> diff;

        for (int i = 0; i < x.size(); i++) {
            if (x[i] != y[i])
                diff.push_back(i);
        }

        if (diff.size() == 0)
            return true;

        if (diff.size() != 2)
            return false;

        return x[diff[0]] == y[diff[1]] &&
               x[diff[1]] == y[diff[0]];
    }

    int countPairs(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (check(nums[i], nums[j]))
                    ans++;
            }
        }

        return ans;
    }
};