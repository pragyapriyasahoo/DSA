class Solution {
public:
    int busyStudent(vector<int>& s,vector<int>& e,int q) {
        int c=0;
        for(int i=0;i<s.size();i++)
            c+=s[i]<=q&&q<=e[i];
        return c;
    }
};