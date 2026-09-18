class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c=0;
        for(auto &r:grid)
            for(int x:r) if(x<0)c++;
        return c;
    }
};