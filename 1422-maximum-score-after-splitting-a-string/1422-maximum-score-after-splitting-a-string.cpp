class Solution {
public:
    int maxScore(string s) {
        int ones=count(s.begin(),s.end(),'1'),zero=0,ans=0;
        for(int i=0;i<s.size()-1;i++){
            zero+=s[i]=='0';
            ones-=s[i]=='1';
            ans=max(ans,zero+ones);
        }
        return ans;
    }
};