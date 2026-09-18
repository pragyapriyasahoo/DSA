class Solution {
public:
    int minCostToMoveChips(vector<int>& p) {
        int e=0,o=0;
        for(int x:p) x%2?o++:e++;
        return min(e,o);
    }
};