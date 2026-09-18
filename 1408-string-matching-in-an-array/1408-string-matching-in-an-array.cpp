class Solution {
public:
    vector<string> stringMatching(vector<string>& w) {
        vector<string>a;
        for(int i=0;i<w.size();i++)
            for(int j=0;j<w.size();j++)
                if(i!=j&&w[j].find(w[i])!=string::npos){
                    a.push_back(w[i]);break;
                }
        return a;
    }
};