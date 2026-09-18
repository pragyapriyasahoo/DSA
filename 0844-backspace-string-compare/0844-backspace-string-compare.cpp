class Solution {
public:
    bool backspaceCompare(string s,string t) {
        auto f=[](string x){
            string a;
            for(char c:x)
                if(c=='#'){if(!a.empty())a.pop_back();}
                else a+=c;
            return a;
        };
        return f(s)==f(t);
    }
};