class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0,x=0;
        for(int n:nums){
            if(c==0)x=n;
            c+=(n==x?1:-1);
        }
        return x;
    }
};