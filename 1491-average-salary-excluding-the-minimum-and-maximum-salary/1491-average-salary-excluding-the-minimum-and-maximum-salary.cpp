class Solution {
public:
    double average(vector<int>& s) {
        int sum=accumulate(s.begin(),s.end(),0);
        return (sum-*min_element(s.begin(),s.end())-
                *max_element(s.begin(),s.end()))/(double)(s.size()-2);
    }
};