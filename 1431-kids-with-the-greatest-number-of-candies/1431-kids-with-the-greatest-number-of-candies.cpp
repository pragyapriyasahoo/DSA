class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extra) {
        int m=*max_element(candies.begin(),candies.end());
        vector<bool> a;
        for(int x:candies) a.push_back(x+extra>=m);
        return a;
    }
};