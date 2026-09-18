class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& m,int k) {
        vector<pair<int,int>> a;
        for(int i=0;i<m.size();i++)
            a.push_back({accumulate(m[i].begin(),m[i].end(),0),i});
        sort(a.begin(),a.end());
        vector<int>ans;
        for(int i=0;i<k;i++)ans.push_back(a[i].second);
        return ans;
    }
};