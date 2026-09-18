class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int x:nums) if(to_string(x).size()%2==0) c++;
        return c;
    }
};