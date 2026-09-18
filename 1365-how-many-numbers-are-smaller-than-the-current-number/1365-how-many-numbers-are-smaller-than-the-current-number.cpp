class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> a=nums,ans;
        sort(a.begin(),a.end());
        for(int x:nums) ans.push_back(lower_bound(a.begin(),a.end(),x)-a.begin());
        return ans;
    }
};