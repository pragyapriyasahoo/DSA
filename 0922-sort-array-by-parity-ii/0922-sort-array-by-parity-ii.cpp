class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> a(nums.size());
        int e=0,o=1;
        for(int x:nums){
            if(x%2==0){a[e]=x;e+=2;}
            else {a[o]=x;o+=2;}
        }
        return a;
    }
};