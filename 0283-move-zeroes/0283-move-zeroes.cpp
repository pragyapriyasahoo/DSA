class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i=0; i<nums.size();i++){
            if(nums[i] != 0){
                swap(nums[i] , nums[j]);
                j++;
            }
        }
        
    }
};

//Time Complexity O(n)
//Space Complexity O(1) 
//Inplace Array Modification