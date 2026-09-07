class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;// it is pointing to the first element
        // traverse the j of entire loop
        for(int j = 0; j < nums.size();j++){
            if(nums[j] != 0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        
    }
};