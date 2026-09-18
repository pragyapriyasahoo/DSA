class Solution {
public:
    string removeDuplicates(string s) {
        string a;
        for(char c:s){
            if(!a.empty()&&a.back()==c)a.pop_back();
            else a+=c;
        }
        return a;
    }
};