class Solution {
public:
    int countGoodTriplets(vector<int>& a,int A,int B,int C) {
        int ans=0;
        for(int i=0;i<a.size();i++)
            for(int j=i+1;j<a.size();j++)
                for(int k=j+1;k<a.size();k++)
                    if(abs(a[i]-a[j])<=A&&abs(a[j]-a[k])<=B&&abs(a[i]-a[k])<=C)ans++;
        return ans;
    }
};