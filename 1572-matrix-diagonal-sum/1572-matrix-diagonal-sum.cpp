class Solution {
public:
    int diagonalSum(vector<vector<int>>& m) {
        int n=m.size(),s=0;
        for(int i=0;i<n;i++)
            s+=m[i][i]+m[i][n-1-i];
        if(n%2)s-=m[n/2][n/2];
        return s;
    }
};