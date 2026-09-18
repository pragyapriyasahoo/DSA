class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string a=s[0];
        for(string x:s)
            while(x.substr(0,a.size())!=a)a.pop_back();
        return a;
    }
};