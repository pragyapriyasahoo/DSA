class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>s;
        while(n!=1){
            if(s.count(n))return false;
            s.insert(n);
            int x=0;
            while(n){x+=(n%10)*(n%10);n/=10;}
            n=x;
        }
        return true;
    }
};