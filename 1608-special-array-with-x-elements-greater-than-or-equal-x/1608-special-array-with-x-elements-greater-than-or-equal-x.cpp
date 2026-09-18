class Solution {
public:
    int specialArray(vector<int>& nums) {
        for(int x = 0; x <= nums.size(); x++) {
            int cnt = 0;
            
            for(int n : nums)
                if(n >= x) cnt++;
            
            if(cnt == x) return x;
        }
        
        return -1;
    }
};