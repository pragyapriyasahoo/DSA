class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> first;
        
        int balance = 0;
        int ans = 0;
        
        first[0] = -1;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1)
                balance++;
            else
                balance--;
            
            if (first.count(balance)) {
                ans = max(ans, i - first[balance]);
            } else {
                first[balance] = i;
            }
        }
        
        return ans;
    }
};