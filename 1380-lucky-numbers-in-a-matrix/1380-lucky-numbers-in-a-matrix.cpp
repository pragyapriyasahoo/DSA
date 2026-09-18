class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& m) {
        vector<int>ans;
        for(int i=0;i<m.size();i++){
            int x=*min_element(m[i].begin(),m[i].end());
            int j=find(m[i].begin(),m[i].end(),x)-m[i].begin();
            bool ok=1;
            for(auto &r:m) if(r[j]>x)ok=0;
            if(ok)ans.push_back(x);
        }
        return ans;
    }
};