class Solution {
public:
    vector<int> getRow(int n) {
        vector<int>a(n+1,1);
        for(int i=1;i<n;i++)
            for(int j=i;j>0;j--)a[j]+=a[j-1];
        return a;
    }
};